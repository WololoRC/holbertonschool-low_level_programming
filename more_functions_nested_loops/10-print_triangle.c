#include "main.h"
void print_triangle(int size)
{
	int x;
	int y = 0;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y= 1; y >= size; y++)
			{
				if (y != size && y != size -x)
				{
					_putchar(' ');
				}
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
