#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function that free memory allocated
 * @grid: the array
 * @height: size of colomn
 * Return: nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
