#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - function that flip bits
 * @n: unsigned int
 * @m: unsigned int
 * Return: i
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b_dif = n ^ m, i = 0;

	while (b_dif)
	{
		i += b_dif & 1;
		b_dif >>= 1;
	}
	return (i);
}
