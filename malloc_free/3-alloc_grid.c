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
	int w, h;

	w = 0;
	h = 0;

	int **arr;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}

	while (h < height)
	{
		arr[h];
		arr[h] = malloc(sizeof(int) * width);
		if (arr[h] == NULL)
		{
			return (NULL);
		}

		h++;
	}

	return (arr);
}
