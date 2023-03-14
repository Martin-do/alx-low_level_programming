#include "main.h"

/**
 * free_grid - frees a grid previously created
 * @grid: pointer to a grid
 * @height: number of rows in grid
 * Return: returns something
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
