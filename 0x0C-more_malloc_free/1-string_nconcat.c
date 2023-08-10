#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that concat n char from s2
 * @s1: first string
 * @s2: second string
 * @n: number of carcter from s2
 * Return: str concat
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i = 0;
	int lens1;
	unsigned int j;

	if (s2 == NULL)
	{
		s2 = "";
	}
	lens1 = strlen(s1);
	str = malloc((sizeof(*str) * (n + 1)) + lens1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	j = 0;
	while (j < n)
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
