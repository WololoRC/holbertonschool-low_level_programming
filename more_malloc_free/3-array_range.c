/**
 **array_range -create an array of integers)
 *
 *@min: min value
 *@max: max value
 * Return: ptr or NULL
 */
#include <stdlib.h>
int *array_range(int min, int max)
{
	int *ptr;
	int cnt;

	if (min > max)
	{
		return (NULL);
	}

	else if (min < 0 && max < 0)
	{
		cnt = min * -1;
		ptr = calloc(cnt - max, sizeof(int));
	}

	else if (min < 0 && max > 0)
	{
		cnt = min * -1;
		ptr = calloc(cnt + max, sizeof(int));
	}

	else
	{
		cnt = min;

		while (cnt <= max)
		{
			cnt++;
		}

		ptr = calloc(cnt, sizeof(int));
	}

	for (cnt = 0; min <= max; cnt++, min++)
	{
		ptr[cnt] = min;
	}

	return (ptr);
}

