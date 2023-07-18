#include "main.h"
/**
 * jack_bauer - Entry point
 * Description: 'print the last digit of any number'
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i <= 23 && j <= 59)
			{
				_putchar('0' + (i / 10));
				_putchar('0' + (i % 10));
				_putchar(':');
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
				_putchar('\n');
			}
		}
	}
}

