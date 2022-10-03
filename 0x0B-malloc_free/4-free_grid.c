#include <stdlib.h>

/**
 * free_grid - A function that freea a 2D array
 * @grid: the pointer to the array
 * @height: the aize of the array
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
