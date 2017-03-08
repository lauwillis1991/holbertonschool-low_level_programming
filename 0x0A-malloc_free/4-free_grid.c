#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: double pointer for 2d grid
 * @height: height
 */

void free_grid(**grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		free(grid);
	}
}
