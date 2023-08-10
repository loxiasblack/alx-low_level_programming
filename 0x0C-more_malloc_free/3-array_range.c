#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - function that creat an array from min to
 * max
 * @min: the first number in the array
 * @max: the last number int the array
 * Return: the array
*/
int *array_range(int min, int max)
{
	int *array;
	int len;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min;
	array = malloc(sizeof(int) * (len + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min <= max)
	{
		*(array + i) = min;
		min++;
		i++;
	}
	return (array);
}
