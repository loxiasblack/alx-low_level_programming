#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - function
 * @filename: file name
 * @text_content: text content
 * Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
int f, w, len = 0;
if (!filename)
return (-1);
f = open(filename, O_WRONLY | O_APPEND);
if (f == -1)
return (-1);
if (text_content)
{
while (text_content[len])
len++;
}
w = write(f, text_content, len);
if (w == -1)
{
close(f);
return (-1);
}
close(f);
return (1);
}
