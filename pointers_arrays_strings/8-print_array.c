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

	cnt = 0;

	while (cnt < n)
	{
		printf("%d", a[cnt]);
			
		if (cnt < (n - 1))
		{
			printf(", ");
		}

		cnt++;
	}
	
	printf("\n");
}
