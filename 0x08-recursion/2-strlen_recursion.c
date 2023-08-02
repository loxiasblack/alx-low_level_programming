#include "main.h"
/**
 * _strlen_recursion - function that return the lenght
 * of string
 * @s: argument string
 * Return: the lenght of string
*/
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
