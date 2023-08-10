#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocate the space of
 * memory
 * @b: the variable to allocate size
 * Return: n
*/

void *malloc_checked(unsigned int b)
{
	int *n;

	n = malloc(b);
	if (n == NULL)
	{
		exit(98);
	}
	return (n);
}
