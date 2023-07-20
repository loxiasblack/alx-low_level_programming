#include "main.h"
/**
 * print_numbers - print form 0 to 9
 * Return: nothing
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
