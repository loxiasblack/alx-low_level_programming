#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * strtow - function that creat an array of string
 * @str: the string input
 * Return: s success
*/
char **strtow(char *str)
{
	int i, j, k, space, word_count;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (*str != ' ')
	{
		str++;
	}
	if (*str == '\0')
	{
		return (NULL);
	}
   
    
	space = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			space++;
	}
	word_count = space;
	s = malloc(sizeof(*s) * (word_count + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		while (*str == ' ')
		{
			str++;
		}
		j = 0;
		while (str[j] != ' ' && str[j] != '\0')
		{
			j++;
		}
		s[i] = malloc(sizeof(char) * (j + 1));
		if (!s[i])
		{
			for (k = 0; k < i; k++)
			{
				free(s[k]);
			}
			free(s);
			return (NULL);
		}
		for (k = 0; k < j; k++)
		{
			s[i][k] = *str;
			str++;
		}
		s[i][k] = '\0';
		i++;
	}
	s[i] = NULL;
	return (s);
}
