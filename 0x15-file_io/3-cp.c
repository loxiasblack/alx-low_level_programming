#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
/**
* main - check the code
* @argc: argc
* @argv: argv
* Return: Always 0.
*/
int main(int argc, char **argv)
{
	int file_to, file_from, r;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY | O_CREAT);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
	S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((r = read(file_from, buff, 1024)) > 0)
		if (write(file_to, buff, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	file_to = close(file_to);
	file_from = close(file_from);
	if (file_from)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from);
		exit(100);
	}
	return (0);
}
