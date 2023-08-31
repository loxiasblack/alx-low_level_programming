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
	int  place = 0, i;
	unsigned int decimal = 0, rem = 0;
	int num;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	num = atoi(b);
	while (num)
	{
		rem = num % 10;
		if (rem)
		{
			decimal = decimal + (_pow_recursion(2, place));
		}
		num = num / 10;
		place++;
	}
	return (decimal);
}
