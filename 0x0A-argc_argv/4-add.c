#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function that print the sum of argument if it's
 * digit
 * @argc: number of argument
 * @argv: character
 * Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int i, j, sum, len;
	char *ptr;

	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			len = strlen(ptr);
			for (j = 0; j < len; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
