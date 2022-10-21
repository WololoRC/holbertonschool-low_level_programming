/**
 *free_grid -free your soul from sin
 *
 *@grid: 2D array pointer
 *@height: height from main
 *
 * Return: freedom
 */
#include <stdlib.h>
void free_grid(int **grid, int height)
{
	int h;

	h = height;

	if (grid != NULL)
	{
		while (h >= 0)
		{
			free(grid[h]);
			h--;
		}

		free(grid);
	}
}
