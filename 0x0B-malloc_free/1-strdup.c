#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - function that duplicate string
 * @str: string to duplicate
 * Return: s success
*/
char *_strdup(char *str)
{
	char *s;
	int len;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';

	return (s);
}
