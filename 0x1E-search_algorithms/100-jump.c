#include <math.h>
#include <stdio.h>
#include "search_algos.h"
/**
 * jump_search - function that search the index
 * of a value
 * @array: the array of integer
 * @size: the size of the array
 * @value: the integer to search
 * Return: the index of the value or -1
*/
int jump_search(int *array, size_t size, int value)
{
	int m = sqrt(size);
	size_t i = 0;

	if (!array)
	{
		return (-1);
	}
	while (i < size)
	{
		if (array[i] >= value && array[i - m] <= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i - m, i);
			i = i - m;
			while (i < size)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
				{
					return (i);
				}
				i++;
			}
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i += m;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i - m, i);
	return (-1);
}
