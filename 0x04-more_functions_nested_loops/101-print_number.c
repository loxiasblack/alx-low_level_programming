#include "main.h"
/**
 * print_number - print the size of triangle
 * @n: the value printed
 * Return: nothing
 */
void print_number(int n)
{
	int divisor;
	int temp;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	divisor = 1;
	temp = n;
	while (temp >= 10)
	{
		temp /= 10;
		divisor *= 10;
	}
	while (divisor >= 1)
	{
		int digit = n / divisor;

		_putchar('0' + digit);
		n %= divisor;
		divisor /= 10;
	}
}
