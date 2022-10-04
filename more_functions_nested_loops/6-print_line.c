#include "main.h"
/**
 *print_line -print n '_' chars
 *
 *
 *@n: number of line
 */
void print_line(int n)
{
	int lnt;

	if (n > 0)
	{
		for (lnt = 1; lnt <= n; lnt++)
		{
			_putchar('_');

			if (lnt == n)
			{
				_putchar('\n');
			}
		}
	}
	else
		_putchar('\n');
}
