#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print the some of numbers diviseble on 3 or 5'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1;
	int n = 1024;
	int k = 0;

	while (i < n)
	{
		if (i % 5 == 0 || i % 3 == 0)
	{
		k += i;
	}
	i++;
	}
	printf("%d\n", k);
	return (0);
}
