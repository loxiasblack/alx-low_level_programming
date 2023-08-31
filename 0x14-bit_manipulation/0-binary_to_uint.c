#include <stdio.h>
#include <stdlib.h>
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
 * binary_to_uint - convert from binary to
 * decimal
 * @b: pointer to a string of number
 * Return: decimal success
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0, len = 0;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		decimal += (b[i] - '0') * (_pow_recursion(2, len - 1 - i));
		i++;
	}
	return (decimal);
}
