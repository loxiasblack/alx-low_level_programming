#include "main.h"
/**
 * _strchr - function
 * @s: pointer of character
 * @c: character searched
 * Return: pointer s or NULL
*/
char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
