# include "main.h"
/**
 * print_last_digit - Entry point
 * Description: 'print the last digit of any number'
 * @num: integer
 * Return: Always 0.
 */
int print_last_digit(int num)
{
	int i;

	if (num < 0)
	{
		i = -1 * (num % 10);
	}
	else
	{
		i = num % 10;
	}
	_putchar('0' + i);
	return (i);
}
