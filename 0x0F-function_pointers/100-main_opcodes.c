#include <stdlib.h>
#include <stdio.h>
/**
 * main - function
 * @argc: number of argumument
 * @argv: arg vector
 * Return: 0 success
*/
int main(int argc, char **argv)
{
	int i, x;

	x = atoi(argv[1]);
	i = 0;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i < x)
	{
		if (i == 0)
			printf("%02hhx", ((char *)main)[i]);
		else
			printf(" %02hhx", ((char *)main)[i]);
		i++;
	}
	printf("\n");
	return (0);
}
