#include "main.h"
/**
 * _strpbrk - function locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * @s: the string
 * @accept: the carcter
 * Return: s or null
*/
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
	{
		return (NULL);
	}
	while (*s)
	{
		if (*s != *accept)
		{
			accept++;
		}
		if (*s == *accept)
		{
			return (s);
		}
		s++;
	}
	if (*s != *accept)
	{
		return (NULL);
	}
	return (0);
}
