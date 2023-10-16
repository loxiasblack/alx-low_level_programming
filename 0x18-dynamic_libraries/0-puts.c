#include "main.h"
/**
 * _puts - print a string,
 * @str: the string
 * Return: 0 sucess
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
