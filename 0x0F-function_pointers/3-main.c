#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <ctype.h>
/**
 * main - function that print a result of an
 * operation between two number
 * @argc: number of argument
 * @argv: agrument vector
 * Return: 0 success
*/
int main(int argc, char **argv)
{
	int num1;
	int num2;
	int result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	if (op[1] != '\0' || !(get_op_func(op)))
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (*op == '/' || *op == '%'))
	{
		printf("Eroor\n");
		exit(100);
	}
	result = get_op_func(op)(num1, num2);
	printf("%d\n", result);
	return (0);
}
