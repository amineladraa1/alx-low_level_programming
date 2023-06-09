#include <stdlib.h>

/**
 * free_grid - Entry point
 *
 * Description: nested loop to free grid
 *
 * @grid: grid
 * @height: height
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
