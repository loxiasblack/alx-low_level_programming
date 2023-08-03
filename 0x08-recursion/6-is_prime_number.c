#include "main.h"
/**
 * is_prime_number - function that return if the number is
 * prime
 * @n: the number
 * @p: the divisor
 * Return: 1 or 0
*/
int recup(int n, int p);
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n > 2)
	{
		return (recup(n, 2));
	}
	else
		return (1);
}
/**
 * recup - function that divide n on p
 * @n: the number
 * @p: the divisor
 * Return: 1 or 0
*/
int recup(int n, int p)
{
	if ((n % p == 0) && (p < n))
	{
		return (0);
	}
	if ((p < n) && (n % p  != 0))
	{
		return (recup(n, p + 1));
	}
	else
		return (1);
}
