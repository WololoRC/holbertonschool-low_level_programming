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
	int *ptr = NULL;
	int len, max2, min2;

	if (min > max)
	{
		return (NULL);
	}

	if (max < 0)
	{
		max2 = max * -1;
		ptr = calloc(max2, sizeof(int));
	}

	else if (min < 0 && max < 0)
	{
		max2 = max * -1;
		min2 = min * -1;
		ptr = calloc(min2 + max2, sizeof(int));
	}

	else
	{
		ptr = calloc(max, sizeof(int));
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (len = 0; min != max; min++, len++)
	{
		ptr[len] = min;
	}

	return (ptr);
}
