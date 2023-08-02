#include "main.h"
/**
 * _sqrt_recursion - function
 * @n: parametre
 * @x: parametre
 * Return : the square
 * Return: the recup
*/
int recup(int x, int n);
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (recup(0, n));
	}
}
/**
 * recup - returns the natural square root of a number
 * @n: number
 * @x:parametre
 * Return: the natural square root of n, -1 if none
 */
int recup(int x, int n)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (recup(x + 1, n));
	}
}
