#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - function that add numbers
 * @argc: the number of argument
 * @argv: the pointer of array
 * Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int i = 1;
	int add = 0;

	if (argc > 1)
	{
		while (i < argc)
		{
			if (atoi(argv[i]) == 0 && strcmp(argv[i], "0") != 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add += atoi(argv[i]);
			}
			i++;
		}
		printf("%d\n", add);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
