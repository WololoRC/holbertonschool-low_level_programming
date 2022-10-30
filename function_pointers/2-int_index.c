#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index -compare array elements
 *
 *@array: array pointer
 *@size: size of array
 *@cmp: function pointer
 * Return: return index position if we have a match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int cnt = 0;

	if (!cmp || !array)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	else
	{
		while (cnt < size)
		{
			if (cmp(array[cnt]) != 0)
			{
				return (cnt);
			}

			cnt++;
		}

	return (-1);
	}
}
