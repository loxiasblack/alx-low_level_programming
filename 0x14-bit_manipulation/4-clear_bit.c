#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * clear_bit - function
 * @n: the number
 * @index: the index
 * Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
