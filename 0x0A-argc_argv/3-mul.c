#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiple argument
 * @argc: the number of argument
 * @argv: the string pointer
 * Return: 0 succes:
*/
int main(int argc, char *argv[])
{
	int i = 1;
	int mult = 1;

	if (argc >= 1)
	{
		while (i < argc)
		{
			mult = mult * atoi(argv[i]);
			i++;
		}
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
