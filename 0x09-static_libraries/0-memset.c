#include "main.h"
/**
 * _memset - return function that print n char of b
 * @s: string
 * @b: character to be printed
 * @n: integer
 * Return: s success
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int  i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
