#include <stdio.h>
#include "main.h"
/**
 * puts_half - function that print the
 * last half of a string
 * @str: the string
 * Return: nothing
*/
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		i = i / 2;
	}
	else
	{
		i = 1 + ((i - 1) / 2);
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
