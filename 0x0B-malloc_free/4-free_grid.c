#include "main.h"
/**
 * free_grid - Frees a 2d grid
 * @grid: a 2d array
 * @height: the height of an 2d array
 * Return: void
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
