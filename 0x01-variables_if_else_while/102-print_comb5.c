#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all digit number with commas'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j;

	while (i <= 99)
	{
		j = i;
		while (j <= 99)
		{
			if (j != i)
			{
				putchar('0' + (i / 10));
				putchar('0' + (i % 10));
				putchar(' ');
				putchar('0' + (j / 10));
				putchar('0' + (j % 10));
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
