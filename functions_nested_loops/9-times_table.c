#include "main.h"
/**
 *times_table -Function
 *
 */
void times_table(void)
{
	int x, t, m;

	for (t = 0; t <= 9; t++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (x = 0; x <= 9 ; x++)
		{
			m = x * t;

			if ((m / 10) > 0)
			{
				_putchar((m / 10) + 48);
			}
			else
			{
				_putchar(' ');
			}

			_putchar((m % 10) + 48);

			if (x < 9)
			{
				_putchar(',');
			}
		}
	_putchar('\n');
	}
}
