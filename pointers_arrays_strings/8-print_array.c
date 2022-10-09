#include <stdio.h>
/**
 *print_array -print elements of an array of integers
 *
 *@a: pointer to array
 *@n: VAR elements of array
 */
void print_array(int *a, int n)
{
	int len;

	len = 1;

	if (a[n] < a[len])
	{
		putchar('\n');
	}

	else
	{
		printf("%d", a[0]);

		for (; a[len] < a[n]; len++)
		{
			putchar(',');
			putchar(' ');
			printf("%d", a[len]);
		}

		putchar('\n');
	}
}
