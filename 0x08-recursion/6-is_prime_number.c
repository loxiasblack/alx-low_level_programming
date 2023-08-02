#include "main.h"
/**
 * is_prime_number - function that print one if it's prime
 * @n: the first parametre
 * @p:the second parametre
 * Return: 1 or 0
*/
int recup(int n, int p);
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else if (n > 2)
	{
		return (recup(n, 2));
	}
	else
		return (0);
}
/**
 * recup - function
 * @n: the first parametre
 * @p: the second parametre
 * Return: 0 or 1
*/
int recup(int n, int p)
{
	if (n != p && n % p == 0)
	{
		return (0);
	}
	if (n == p)
	{
		return (1);
	}
	else
	{
		return (recup(n, p + 1));
	}
}
