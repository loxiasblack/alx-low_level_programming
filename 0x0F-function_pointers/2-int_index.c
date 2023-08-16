#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that return the first
 * index that much the condition of function
 * cmp
 * @array: the array of element
 * @size: size of array
 * @cmp: function pointer
 * Return: i succes or -1;
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
