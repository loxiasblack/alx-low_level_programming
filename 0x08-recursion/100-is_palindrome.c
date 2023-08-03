#include "main.h"
/**
 * is_palindrome - function that determine if
 * the string is palindrdome
 * @s: string
 * Return: 1 or 0
*/
int is_palindrome(char *s)
{
	int i = 0;
	int l = strlen(s) - 1;

	while (l > i)
	{
		if (s[i++] != s[l--])
		{
			return (0);
		}
	}
	return (1);
}
