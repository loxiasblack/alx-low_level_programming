#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit - get the binary number in the index
 * @n: the number
 * @index: the index
 * Return: 0 or 1;
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
