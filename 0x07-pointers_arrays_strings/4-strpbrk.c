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
	char *current_accept;

	if ((s == NULL) || (accept == NULL))
	{
		return (NULL);
	}
	while (*s)
	{
		current_accept = accept;

		while (*current_accept)
		{
			if (*current_accept == *s)
			{
				return (s);
			}
			current_accept++;
		}
		s++;
	}
	return (NULL);
}
