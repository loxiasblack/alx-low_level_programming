#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: 'print the alphabet 10 times'
 * Return: Always 0 (Success)
 */

int print_alphabet_x10(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 26)
		{
			_putchar(alph[j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
