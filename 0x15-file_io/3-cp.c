#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
#define BUFF_SIZE 1024
/**
* close_file - function that check if the file
* are close
* @file_from: file to copy from
* @file_to: file to copy to
*/
void close_file(int file_from, int file_to)
{
	if (file_from)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from);
		exit(100);
	}
	if (file_to)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_to),
		exit(100);
	}
}
/**
 * copy_content - function that copy the content from to
 * another file
 * @file_from: file from
 * @file_to: file to
 * @argv: the name of argv
*/
void copy_content(int file_from, int file_to, char **argv)
{
	char buff[BUFF_SIZE];

	int r;

	while ((r = read(file_from, buff, BUFF_SIZE)) > 0)
		if (write(file_to, buff, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", argv[1]);
		close(file_from);
		close(file_to);
		exit(98);
	}
}
/**
* main - check the code
* @argc: argc
* @argv: argv
* Return: Always 0.
*/
int main(int argc, char **argv)
{
	int file_to, file_from;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
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
	copy_content(file_from, file_to, argv);
	file_to = close(file_to);
	file_from = close(file_from);
	close_file(file_from, file_to);
	return (EXIT_SUCCESS);
}
