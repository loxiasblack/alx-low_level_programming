#include "main.h"
/**
 * _strlen - swap value of int,
 * @s: the string
 * Return: len sucess
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
