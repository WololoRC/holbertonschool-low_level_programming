#include "main.h"
#include <stdio.h>
/**
 *print_to_98 -Function
 *
 *@n: input
 *
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n++;
			if (n == 98)
				printf("98\n");
		}
	}

	if (n > 98)
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n--;
			if (n == 98)
				printf("98\n");
		}
	}
	if (n == 98)
	{
		printf("%d", n);
	}
}
