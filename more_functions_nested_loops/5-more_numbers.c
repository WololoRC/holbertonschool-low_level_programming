#include "main.h"
/**
 *alp -Real function
 *
 *
 */
void alp(void)
{
	int x;

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
}
/**
 *more_numbers -Im lazzy
 *
 *
 *
 */
void more_numbers(void)
{
	int y;

	for (y = 0; y <= 10; y++)
	{
		alp();
		_putchar('\n');
	}
}
