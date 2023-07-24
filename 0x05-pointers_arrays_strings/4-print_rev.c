#include "main.h"
/**
 * print_rev - print a reverse string,
 * @s: the string
 */
void print_rev(char *s)
{
	int n = strlen(s);

	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
