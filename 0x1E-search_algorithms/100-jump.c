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
	int prev = 0;
	size_t step = sqrt(size);

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while (array[min(step, size)] < value)
	{
		prev = step;
		step += sqrt(size);
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (step > size)
		{
			printf("Value found between indexes [%d] and [%ld]\n", prev, step);
			printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
			return (-1);
		}
	}

	printf("Value found between indexes [%d] and [%ld]\n", prev, step);

	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == min(step, size))
			break;
	}
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
		return (prev);
	else
		return (-1);

}
/**
 * min - the min between two numbers
 * @a: first number
 * @b: second number
 * Return: the s
*/
int min(size_t a, size_t b)
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
