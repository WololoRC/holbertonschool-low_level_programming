#include "main.h"
void print_line(int n)
{
	int lnt;

	for (lnt = 0; lnt <= n; lnt++)
	{
		if (lnt == n)
		{
			_putchar('\n');
		}
		else
			_putchar('_');
	}

}
