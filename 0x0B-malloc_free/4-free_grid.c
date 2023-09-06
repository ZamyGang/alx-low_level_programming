#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - A function that frees a 2 dimensional grid
 * previously create by your alloc_grid function.
 * @grid: input
 * @height: input
 * Return: 0 (success).
 *
 *
 */
void free_grid(int **grid, int height)
{
	int y;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (y = 0; y < height; y++)
	{
		free(grid[y]);
	}
	free(grid);
}
