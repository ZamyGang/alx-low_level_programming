#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
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
