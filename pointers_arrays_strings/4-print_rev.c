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

	lmt = *s - 1;

	while (*s != '\0')
	{
		s++;
	}


	while (*s != lmt)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
