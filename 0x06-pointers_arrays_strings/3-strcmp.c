#include "main.h"
/**
 * _strcmp - print a string,
 * @s1: string 1
 * @s2: string 2
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (result = 0);
		}
		i++;
	}
	while (s1[i] != s2[i])
	{
		result = s1[0] - s2[0];
		i++;
	}
	return (result);
}
