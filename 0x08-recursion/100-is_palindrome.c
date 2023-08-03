#include "main.h"
/**
 * is_palindrome - function that determine if
 * the string is palindrdome
 * @s: string
 * Return: 1 or 0
*/
int function (char *s, int i, int l);
int is_palindrome(char *s)
{
	int i = 0;
	int l = strlen(s) - 1;

	if (*s)
    {
        return function(s, i, l);
    }
    return 0;
}
int function (char *s, int i, int l)
{
    if (NULL == s || l < 0 || i < 0)
    {
        return (0);
    }
    if (i >= l)
    {
        return (1);
    }
    if (s[i] == s[l])
    {
        return function(s, i+1, l-1);
    }
    return 0;    
}
