
#include <stdio.h>
/**
 * main - print from 1 to 100
 * Return: 0 alwqys
 */
int main(void)
{
	int i = 1;

	while (i <= 100 )
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
