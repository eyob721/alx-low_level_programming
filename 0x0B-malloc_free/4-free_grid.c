#include "main.h"

/**
 * free_grid - frees a 2d grid previously created by the function alloc_grid
 * @grid: a 2d grid (2d array)
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
