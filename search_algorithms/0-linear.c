#include "search_algos.h"
/**
 * linear_search - founda a value on an array by linear searching
 *
 *@array: array
 *@size: array size
 *@value: value to search
 * Return: value, and value position on success, -1 if fails.
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int cnt = 0;

	if (array)
	{
		while (cnt <= (size - 1))
		{
			printf("Value checked array[%d] = [%d]\n", cnt, array[cnt]);
			if (array[cnt] == value)
			{
				return (cnt);
			}

			cnt++;
		}
	}

	return (-1);
}
