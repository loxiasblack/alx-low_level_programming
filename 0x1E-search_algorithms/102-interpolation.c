#include "search_algos.h"
/**
 * interpolation_search - function that search with interpolation
 * @array: pointer to the first element
 * @size: the lenght of the array
 * @value: value searched
 * Return: the position or -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	size_t pos;

	if (!array)
		return (-1);
	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
			{
				printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
				return (low);
			}
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
		(value - array[low]));
		if (array[pos] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			return (pos);
		}
		if (array[pos] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			low = pos + 1;
		}
		if (array[pos] > value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			high = pos - 1;
		}
	}
	pos = low + (((double)(high - low) / (array[high] - array[low])) *
	(value - array[low]));
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
