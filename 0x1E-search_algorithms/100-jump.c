#include "search_algos.h"
/**
 * jump_search - function that serach with jump search
 * @array: the order list
 * @size: the lenght of the array
 * @value: the value search
 * Return: the index found or -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t step = sqrt(size);
	size_t temp = 0;

	
	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		temp = prev;
		prev = step;
		step += sqrt(size);
		if (prev >= size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", temp, prev);
			printf("Value checked array[%ld] = [%d]\n", temp, array[temp]);
			return (-1);
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", temp, prev);
	while (array[temp] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", temp, array[temp]);
		temp++;
		if (temp == min(step, size))
			return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", temp, array[temp]);
	if (array[temp] == value)
		return (temp);
	return (-1);
}
/**
 * min - the min between two numbers
 * @a: first number
 * @b: second number
 * Return: the number
*/
size_t min(size_t a, size_t b)
{
	if (b > a)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}
