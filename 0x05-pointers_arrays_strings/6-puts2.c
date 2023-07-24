#include "main.h"
/**
 * puts2 - print a string,
 * @str: the string
 * Return: 0 sucess
 */
void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
		n++;
	}
	_putchar('\n');
}
