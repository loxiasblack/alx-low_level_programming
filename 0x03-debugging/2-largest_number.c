#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (a > c || b > c)
			largest = a;
		else if (c > a)
			largest = c;
		else
			largest = a;
	}
	if (b > a)
	{
		if (a > c || b > c)
			largest = b;
		else if (c > b)
			largest = c;
		else
			largest = b;
	}
	else if (c > a)
	{
		largest = c;
	}
	else
	{
		largest = a;
	}
	return (largest);
}
