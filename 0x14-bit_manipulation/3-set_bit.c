#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * set_bit - function that set bit in index
 * @n: pointer to integer
 * @index: index
 * Return: 1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	*n |= (1 << index);
	return (1);
}
