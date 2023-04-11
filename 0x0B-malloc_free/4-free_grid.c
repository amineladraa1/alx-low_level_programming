#include <stdlib.h>

/**
 * alloc_grid - Entry point
 *
 * Description: nested loop to make grid
 *
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2 dim. array
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
