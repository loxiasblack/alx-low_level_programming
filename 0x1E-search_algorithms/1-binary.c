#include "search_algos.h"
/**
 * binary_search - function that search value
 * algorithm
 * @array: array to search in
 * @size: the lenght of the array
 * @value: value searched
 * Return: the index found it
*/
int binary_search(int *array, size_t size, int value)
{
	int last = size - 1;

	int first = 0;

	int mid = 0;

	int i = 0;

	if (!array)
		return (-1);
	while (first <= last)
	{
		mid = (first + last) / 2;
		i = first;
		printf("Searching in array: ");
		while (i <= last)
		{
			if (i != last)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
			i++;
		}
		if (array[mid] < value)
			first = mid + 1;
		else if (array[mid] > value)
			last = mid - 1;
		else
			return (mid);
	}
	while (i <= last)
	{
		printf("Searching in array: ");
		if (i != last)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
		i++;
	}
	return (-1);
}
