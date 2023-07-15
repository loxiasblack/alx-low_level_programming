#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all digit number with commas'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i != j && i != k && j != k && i < j && j < k)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i != 7 || j != 8 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
