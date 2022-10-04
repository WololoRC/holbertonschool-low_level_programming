#include "main.h"
/**
 *more_numbers -print numbers of 0 to 14
 *
 *
 */
void more_numbers(void)
{
	int x, y;

	for (y = 0; y <= 10; y++)
	{
		for (x = 0; x <= 14; x++)
		{

			if ((x + '0') > '9')
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}

			else
				_putchar((x + '0'));
		}
	_putchar('\n');
	}
}
