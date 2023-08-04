#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry function
 * @argc: number of count
 * @argv: the pointer of caracter
 * Return: 0 success
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
