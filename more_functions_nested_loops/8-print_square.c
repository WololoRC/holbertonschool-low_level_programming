#include "main.h"
/**
 *print_square -this function prints a square
 *
 *
 *@size: size
 */
void print_square(int size)
{
	int x, n;

	n = 0;

	if (size < 0)
		_putchar('\n');

	else

		while (n < size)
		{
			for (x = 1; x <= size; x++)
			{
				_putchar('#');

				if (x == size)
				{
					_putchar('\n');
				}
			}
		n++;
		}
}
