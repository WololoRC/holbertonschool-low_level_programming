#include <stdio.h>
/**
 *print_array -print elements of an array of integers
 *
 *@a: pointer to array
 *@n: VAR elements of array
 */
void print_array(int *a, int n)
{
	int cnt;

	for (cnt = 0; cnt <= (n - 1); cnt++)
	{
		printf("%d, ", a[cnt]);
	}

	printf("%d\n", a[n]);
}
