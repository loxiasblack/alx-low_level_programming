#include "main.h"
/**
 * puts_half - print half of a string,
 * @str: the string
 * Return: nothing
 */
void puts_half(char *str)
{
	int n = strlen(str);
	int i = 0;

	if (n % 2 == 0)
	{
		while (i <= n)
		{
			if (i >= (n / 2))
				_putchar(str[i]);
			i++;
		}
	}
	if (n % 2 != 0)
	{
		while (i <= n)
		{
			if (i >= (n - 1) / 2)
				_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
