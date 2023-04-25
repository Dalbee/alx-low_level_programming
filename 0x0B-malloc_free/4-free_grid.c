#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a fx. that frees the memory allocate for the grid
 * created by alloc_grid()
 * @grid: the grid to free
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL || height == 0)
		return;

	for (j = 0; j < height; j++)
		free(grid[j]);

	free(grid);
}
