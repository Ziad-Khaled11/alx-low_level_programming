#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function frees a grid
 *
 * @grid: parameter that taken to be checked
 * @height: parameter
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	free(grid[i]);
	free(grid);

	}
