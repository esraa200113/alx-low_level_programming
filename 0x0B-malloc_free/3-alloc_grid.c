#include <stdlib.h>
#include<stdio.h>
/**
 * alloc_grid - Allocate memory for a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: Pointer to the allocated 2D array.
 *         NULL on failure or if width/height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	
	if (grid != NULL)
	{
		int i, j;
		
		for (i = 0; i < height; i++)
		{
			grid[i] = (int *)malloc(sizeof(int) * width);
			if (grid[i] != NULL)
			{
				for (j = 0; j < width; j++)
					grid[i][j] = 0;
			}
			else
			{
				while (--i >= 0)
					free(grid[i]);
				free(grid);
				return (NULL);
			}
		}
	}
	return (grid);
}

