#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - function that search value
 * by interpolation
 * @array: the array to search in
 * @size: the size of the array
 * @value: the target
 * Return: the index where the value found or -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1;
	size_t low = 0;
	size_t pos;

	if (!array || size == 0)
		return (-1);
	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);

		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
		{
			return (pos);
		}
		else if (value < array[pos])
		{
			high = pos + 1;
		}
		else
		{
			low = pos + 1;
		}
	}
	return (-1);
}
