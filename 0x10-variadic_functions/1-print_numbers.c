#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that print numbers of
 * argument with separator
 * @separator: the separator of numbers
 * @n: the count of numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);
	if (separator == NULL)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", va_arg(arg, int));
		}
		else
		{
			printf("%c %d", separator, va_arg(arg, int));
		}
	}
	va_end(arg);
    printf("\n");
}
