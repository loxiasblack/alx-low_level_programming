#include "main.h"
/**
 * factorial - function that calculate factorial
 * of number
 * @n: number to get te result
 * Return: the number
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
