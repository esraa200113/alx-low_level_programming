#include <stdlib.h>

/**
 * free_grid - Free the memory of a 2D grid.
 * @grid: Pointer to the 2D array.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;
	
	if (grid == NULL || height <= 0)
        return;
	
	for (int i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}
	free(grid);
}

