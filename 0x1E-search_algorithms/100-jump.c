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

	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (step > size)
		{
			return (-1);
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", tmp, prev);
	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == min(step, size))
			return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", tmp, array[tmp]);
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
