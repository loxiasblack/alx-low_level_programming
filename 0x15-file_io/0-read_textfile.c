#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - function that read and write
 * from a file to th POSIX
 * @filename: the file desired
 * @letters: len of charcter
 * Return: value of r or 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int o, r, w;

	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		close(o);
		return (0);
	}
	r = read(o, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(o);
		return (0);
	}
	buffer[r] = '\0';
	w = write(1, buffer, r);
	if (w == -1)
	{
		close(o);
		free(buffer);
		return (0);
	}
	close(o);
	free(buffer);
	return (r);
}
