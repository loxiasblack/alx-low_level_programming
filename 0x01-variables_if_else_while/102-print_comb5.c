#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all digit number with commas'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i != j)
			{
				putchar('0' + (i / 10));
				putchar('0' + (i % 10));
				putchar(' ');
				putchar('0' + (j / 10));
				putchar('0' + (j % 10));
				if (i != 99 || j != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
