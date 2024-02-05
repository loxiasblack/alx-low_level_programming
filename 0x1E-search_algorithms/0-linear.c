#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search - function that search that
 * return the first index that match the value
 * searched
 * @array: the pointer to the first index in the array
 * @size: the lenght of the array
 * @value: the number searched
 * Return: the index i or -1 if no value found
*/
int linear_search(int *array, size_t size, int value)
{
	int i = 0;
	size_t j;

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%d] = [%d]\n", i, *array);
		if (*array == value)
			return (i);
		i++;
		array++;
	}
	i = -1;
	return (i);
}
