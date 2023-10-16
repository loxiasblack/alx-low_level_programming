#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c : integer that represents the ASCII code of the checked character
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
