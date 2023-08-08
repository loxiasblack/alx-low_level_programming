#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function that creat an array of 2 dim
 * @width: the number of colomn
 * @height: the number of row
 * Return: grid success
*/
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **grid;

	grid = malloc(sizeof(*grid) * height);

	if (grid == NULL || height <= 0 || width <= 0)
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
				free(grid[i]);
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
