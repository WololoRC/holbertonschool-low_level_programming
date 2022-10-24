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
	int len;

	if (max < 0)
	{
		max = max * -1;
	}

	if (min >= max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max + 4));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (len = 0; min <= max; min++, len++)
	{
		ptr[len] = min;
	}

	return (ptr);
}
