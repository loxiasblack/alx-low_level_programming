#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that return an array of char
 * @size: the number of caracter
 * @c: the carcter printed
 * Return: s the array
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * (size + 1));

	if (size == 0)
	{
		return (NULL);
	}
	i = 0;

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
