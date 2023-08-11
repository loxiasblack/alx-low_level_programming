#include "main.h"

/**
 * puts_half - function that printsvhalf of a string,
 * followed by a new line
 * @str: string whose half is to be printed
 */
void puts_half(char *str)
{
	int len;

	while (*str)
	{
		len++;
		str++;
	}
	if (len % 2 != 0)
	{
		len = 1 + ((len - 1) / 2);
	}
	else
		len = len / 2;
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
