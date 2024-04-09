#include "search_algos.h"
/**
 * linear_search - function that checked values
 * @array: the pointer to the first index in the array
 * @size: size of the array
 * @value: the value searche
 * Return: index or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
	{
		return (-1);
	}

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
