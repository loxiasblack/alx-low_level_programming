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
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
