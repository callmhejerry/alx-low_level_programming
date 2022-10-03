#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: the pointer to the array or NULL on
 * failure
 */
int **alloc_grid(int width, int height)
{
	int **ptrarr, w, h;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptrarr = (int **)malloc(sizeof(int *) * height);
	if (ptrarr == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		ptrarr[h] = (int *)malloc(sizeof(int) * width);
		if (ptrarr[h] == NULL)
			return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			ptrarr[h][w] = 0;
			free(ptrarr[h]);
		}
	}
	return (ptrarr);
}
