#include "main.h"
/**
 * swap_int - swap value of int,
 * @a: the value 1
 * @b: the value 2
 * Return: 0 sucess
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
