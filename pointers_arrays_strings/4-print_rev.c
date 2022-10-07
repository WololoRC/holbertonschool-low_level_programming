/**
 *print_rev -print string on reverse
 *
 *
 *@s: pointer
 */
#include "main.h"
void print_rev(char *s)
{
	int lmt;

	lmt = 0;

	while (s[lmt] != '\0')
	{
		lmt++;
	}

	for (; lmt >= 0; lmt--)
	{
		_putchar(s[lmt]);
	}

	_putchar('\n');
}
