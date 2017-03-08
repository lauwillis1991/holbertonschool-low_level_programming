#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array of pointers.
 * @width: width
 * @height: height
 * Return: NULL of failure.
 */


int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	grid = malloc(height * sizeof(*grid));

	if (grid == NULL || height < 1 || width < 1)

	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid[i]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
