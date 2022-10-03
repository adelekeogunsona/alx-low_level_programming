#include "main.h"

/**
 * free_grid - free up 2d array
 * @grid: pointer to array
 * @height: array rows
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		free(grid);
	}
}
