#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function that print string with separator
 * @separator: the char separator
 * @n: number of strigns (argument)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%s", va_arg(arg, char *));
		}
		if (i > 0 && separator == NULL)
		{
			printf("%s", va_arg(arg, char *));
		}
		if (i > 0 && separator != NULL)
		{
			printf("%s%s", separator, va_arg(arg, char *));
		}
	}
	va_end(arg);
	printf("\n");
}
