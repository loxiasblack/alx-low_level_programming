#include "main.h"
/**
 * print_line - print form 0 to 14 in 10 line
 * @n: the number of underline printed
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
