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
	char *ptr;

	ptr = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
