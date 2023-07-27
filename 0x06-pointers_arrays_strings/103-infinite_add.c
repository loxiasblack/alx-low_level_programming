#include "main.h"
/**
 * infinite_add - function that put in string the add of two numbers
 * @n1: first number
 * @n2: second number
 * @r: the sum of the two numbers
 * @size_r: the lenght of the string
 * Return - succes
 * Return: char
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned long  sum;
	unsigned long  n1_int;
	unsigned long  n2_int;
	int len_r = strlen(r);

	n1_int = atoi(n1);
	n2_int = atoi(n2);
	sum = n1_int + n2_int;

	snprintf(r, size_r, "%ld", sum);
	if (size_r > len_r)
		return (r);
	else
		return (0);
}
