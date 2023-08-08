#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function that creat a string of av
 * @ac: argument count
 * @av: argument vector
 * Return: argc success
*/
char *argstostr(int ac, char **av)
{
	char *arg;
	int i;
	int total_length = 0;
	int current_position = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
    total_length += 1;
	arg = malloc(sizeof(char) * total_length);

	if (arg == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(arg + current_position, av[i]);
		current_position += strlen(av[i]);
		arg[current_position] = '\n';
		current_position++;
	}
	arg[current_position - 1] = '\n';
	return (arg);
}
