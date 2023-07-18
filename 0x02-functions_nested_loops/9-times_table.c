#include "main.h"
/**
 * times_table - Entry point
 * Description: 'print matrice that i*j each line'
 * Return: Always 0.
 */
void times_table(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			int k = i * j;

			if (k < 10)
			{
				_putchar(' ');
				_putchar('0' + k);
			}
			else
			{
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		putchar('\n');
		i++;
	}
}
