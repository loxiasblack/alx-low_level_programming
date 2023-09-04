#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * create_file - function that creat a file
 * @filename: the name of a file
 * @text_content: the content to add of text
 * Return: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
	int i, w, len = 0;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (i == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		w = write(i, text_content, len);
	}
	else
		w = write(i, "", 0);
	if (w == -1)
	{
		close(i);
		return (-1);
	}
	close(i);
	return (1);
}
