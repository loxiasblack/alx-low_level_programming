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
	char *tmp;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(arg, char *);
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		if (tmp == NULL)
			printf("(nil)");
		else
			printf("%s", tmp);
	}
	va_end(arg);
	printf("\n");
}
