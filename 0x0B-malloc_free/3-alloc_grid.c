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
	int **grid;
	int i;
	int j;
	int k;

	grid = malloc(sizeof(*grid) * height);

	if (grid == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(**grid) * width);

		if (grid[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(grid[k]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
