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

		for (x = 1; x <= 9 ; x++)
		{
			m = x * t;

			if (((m / 10) + 48) == '0')
			{
				_putchar(' ');
			}

			else

			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);

			if (x < 9)
			{
				_putchar(',');
				_putchar(' ');


			}
		}
	_putchar('\n');
	}
}
