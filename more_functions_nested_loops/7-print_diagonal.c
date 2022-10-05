#include "main.h"
/**
 *print_diagonal -IDK
 *
 *@n: lenght of diagonal
 *
 *
 */
void print_diagonal(int n)
{
	int i, x;

	if (n <= 0)

		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (x = 0; x <= i; x++)
		{
			if (x == i)
			{
				_putchar(92);
				_putchar('\n');
			}

			else
			{
				_putchar(' ');
			}

		}
	}
}
