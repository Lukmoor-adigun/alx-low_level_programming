#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2-dimensional grid previously created by alloc_grid.
 *
 * @grid: a pointer to the grid to be freed.
 * @height: the height of the grid.
 *
 * Return: nothing.
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
