#include "main.h"
/**
 * print_number - function that print number
 * @n: integer to be printed
 * Return - nothing
*/
void print_number(int n)
{
	unsigned int i = 0;

	i = n;
	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if ((i / 10) > 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
