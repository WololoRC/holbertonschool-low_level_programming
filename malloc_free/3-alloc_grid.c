/**
 ***alloc_grid -return a 2D array filled with 0's
 *
 *@width: by main
 *@height: by main
 *
 * Return: 2D array or NULL
 */
#include <stdlib.h>
int **alloc_grid(int width, int height)
{
	int h;
	int **arr = NULL;

	h = 0;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	while (h < height)
	{
		arr[h] = malloc(sizeof(int) * width);

		if (arr[h] == NULL)
		{
			while (h <= 0)
			{
				free(arr[h]);
				if (!h)
				{
					free(arr);
				}
			
				return (NULL);
			}
		}

		h++;
	}

	return (arr);
}
