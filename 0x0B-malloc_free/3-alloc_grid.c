#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function that return an array
 * @width: the size of row
 * @height: the size of colomn
 * Return: grid success
*/
int **alloc_grid(int width, int height)
{
	int **buffer;
	int i = 0;
	int j;
	int k;

	buffer = malloc(sizeof(int *) * height);
	if (buffer == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
	}
	while (i < height)
	{
		j = 0;
		buffer[i] = malloc(sizeof(int) * width);
		if (buffer == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(buffer[k]);
			}
			free(buffer);
		}
		while (j < width)
		{
			buffer[i][j] = 0;
			j++;
		}
		i++;
	}
	return (buffer);
}
