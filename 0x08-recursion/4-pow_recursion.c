#include "main.h"
/**
 * _pow_recursion - function that return power of x
 * @x: the number to be in power
 * @y: the power
 * Return: the power of x
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
