#include <stdlib.h>
void free_grid(int **grid, int height)
{
	if (grid != NULL)
	{
		while (grid[height] >= 0)
		{
			free(grid[height]);
			height--;
		}

		free(grid);
	}
}
