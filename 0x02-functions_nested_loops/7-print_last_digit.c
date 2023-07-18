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

	i = abs(num) % 10;
	_putchar('0' + i);
	return (0);
}
