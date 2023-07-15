#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all combinations'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i <= 9; i++)
	for (j = 0; j <= 9; j++)
	{
		if (i != j && i < j)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
putchar('\n');
return (0);
}
