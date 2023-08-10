#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocate space of memory
 * by initializing by 0
 * @nmemb: the number of element in the array
 * @size: the size of type of element
 * Return: array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	array = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		exit(0);
	}
	memset(array, 0, nmemb * size);
	return (array);
}
