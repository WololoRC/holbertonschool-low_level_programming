#include "main.h"

void print_diagonal(int n)
{
	if (n <= 0)

		_putchar('\n');	
		
	for (int i = 0; i < n; i++)
	{
		for (int x = 0; x <= i; x++)
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
