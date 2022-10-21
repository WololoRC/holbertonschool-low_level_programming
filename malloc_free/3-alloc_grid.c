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
	int w;
	int **arr = NULL;

	w = 0;

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

	while (w < height)
	{
		arr[w] = malloc(sizeof(int) * width);

		if (arr[w] == NULL)
		{
			while (w >= 0)
			{
				free(arr[w]);
				w--;
			}

			free(arr);
			return (NULL);
		}

		w++;
	}

	return (arr);
}
