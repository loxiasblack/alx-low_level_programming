#include "main.h"

/**
 * puts_half - function that printsvhalf of a string,
 * followed by a new line
 * @str: string whose half is to be printed
 */
void puts_half(char *str)
{
	int len, n;

	len = strlen(str);
	if (len % 2 != 0)
	{
		n = ((len - 1) / 2);
	}
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
