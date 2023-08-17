#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that return the sum of arguments
 * @n: the number of argument set
 * Return: sum success
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int  i;
	int sum;
	va_list arg;

	va_start(arg, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
