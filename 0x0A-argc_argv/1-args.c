#include <stdio.h>
/**
 * main - function that return the number of vector
 * @argc: the count
 * @argv: the number of argument
 * Return: 0 success
*/
int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	if (argc > 1)
	{
		while (argv[i] < argv[argc - 1])
		{
			sum += 1;
			i++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", i);
	}
	return (0);
}
