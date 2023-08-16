#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function that execute
 * each element of the array
 * @array: array
 * @size: size of array
 * @action: function to a pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
