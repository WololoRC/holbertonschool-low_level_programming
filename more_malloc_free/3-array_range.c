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

	cnt = min;

	while (cnt <= max)
	{
		cnt++;
	}

	ptr = calloc(cnt, sizeof(int));

	for (cnt = 0; min <= max; cnt++, min++)
	{
		ptr[cnt] = min;
	}

	return (ptr);
}
