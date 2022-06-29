#include "main.h"

/**
 * free_grid - Function to free grid from previous function
 * @grid: array to free
 * @height: height of grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
