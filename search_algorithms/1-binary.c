#include "search_algos.h"
/**
 * binary_search - Searchs on a array by binary search
 *
 *@array: array
 *@size: array size
 *@value: searched value
 * Return: index on success, -1 if fails.
 */
int binary_search(int *array, size_t size, int value)
{
	int l, r, mid, guess;

	l = 0;
	r = (size - 1);

	while (l <= r)
	{
		print_cut(array, l, r);
		mid = (l + r) / 2;

		guess = array[mid];

		if (guess == value)
			return (mid);

		else if (guess > value)
		{
			r = mid - 1;
		}
		else if (guess < value)
		{
			l = mid + 1;
		}

		else
			break;
	}

	return (-1);
}
/**
 * print_cut - print the the array cuted by binary search
 *@array: array
 *@l: left
 *@r: right.
 */
void print_cut(int *array, int l, int r)
{
	printf("Searching in array: ");

	printf("%d", array[l]);
	l++;

	while (l <= r)
	{
		printf(", ");
		printf("%d", array[l]);

		l++;
	}

	printf("\n");
}
