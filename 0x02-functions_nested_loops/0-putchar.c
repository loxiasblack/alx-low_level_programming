#include "main.h"
/**
 * main - Entry point
 * Description: 'print _putchar'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char string[] = "_putchar";
	int i;

	i = 0;
	while (i < 8)
	{
		_putchar(string[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
