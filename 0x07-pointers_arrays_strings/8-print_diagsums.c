#include "main.h"
/**
 * print_diagsums - function that print the sum of diagonal
 * @a: the array
 * @size: the size of the array
 * Return: Nothing
*/
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}
	for (i = 0 ; i < size; i++)
	{
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
