#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - function that return
 * the power of two number
 * @x: the base number
 * @y: the exp number
 * Return: the power by recursion
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
/**
 * print_binary - function that convert number
 * to binary
 * @n: the number to convert
*/
void print_binary(unsigned long int n)
{
	long int j = n;
	long int k = n;
	int place = 10;

	if (j == 0)
	{
		_putchar('0');
		return;
	}
	while (place >= 0)
	{
		if (k >= _pow_recursion(2, place))
		{
			if (j == _pow_recursion(2, place) || j >= _pow_recursion(2, place))
			{
				_putchar('1');
				j -= _pow_recursion(2, place);
			}
			else if (j < _pow_recursion(2, place))
			{
				_putchar('0');
			}
		}
		place--;
	}
}
