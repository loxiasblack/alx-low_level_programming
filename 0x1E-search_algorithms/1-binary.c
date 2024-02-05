#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - function that found value
 * in binary search
 * @array: pointer to the first index in the array
 * @size: the size of the array
 * @value: the target to search in the array
 * Return: value if found otherwise return -1
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;
	int i;

	if (!array)
	{
		return (-1);
	}
	while (left <= right)
	{
		for (i = left; i < right + 1; i++)
		{
			if (i == left)
				printf("Searching in array: ");
			if (i == right)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		mid = left + (right - left) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
