#include <stdio.h>
/**
 * main - Entry point
 * Description: 'fibonnaci 98'
 * Return: Always 0 (Success)
*/
int main(void)
{
	unsigned long prev = 0;
	unsigned long current = 1;
	unsigned long next;
	int n = 99;

	while (n--)
	{
		next = current + prev;
		if (n != 0)
			printf("%lu, ", next);
		prev = current;
		current = next;
		if (n == 0)
			printf("%lu\n", next);
	}
	return (0);
}
