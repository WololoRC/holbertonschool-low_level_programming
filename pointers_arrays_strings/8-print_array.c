#include <stdio.h>
/**
 *print_array -print elements of an array of integers
 *
 *@a: pointer to array
 *@n: VAR elements of array
 */
void print_array(int *a, int n)
{
	int len, len2, newLen;

	len = 1;

	printf("%d", a[0]);

	for (; a[len] < a[n]; len++)
	{
		putchar(',');
		putchar(' ');
		printf("%d", a[len]);
	}

	putchar('\n');
}
