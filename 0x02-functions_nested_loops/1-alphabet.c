#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: 'print alphabet'
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
	char alph[] = "abcdefghijklmnopqrstuvzwxyz";
	int i;

	i = 0;
	while (i < 26)
	{
		_putchar(alph[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
