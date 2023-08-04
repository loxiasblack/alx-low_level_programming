#include <stdio.h>
/**
 * main - function that print evry argument
 * @argc: the number of argument
 * @argv: the vector
 * Return: 0 success
*/
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 1)
	{
		while (argv[i] < argv[argc - 1])
		{
			printf("%s\n", argv[i]);
			i++;
		}
		printf("%s\n", argv[argc - 1]);
	}
	else
	{
		printf("%s\n", argv[argc - 1]);
	}
	return (0);
}
