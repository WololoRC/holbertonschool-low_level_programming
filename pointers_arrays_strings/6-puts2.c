#include "main.h"
/**
 *puts2 -print str sorted by 2
 *
 *
 *
 *@str: pointer
 */
void puts2(char *str)
{
	int lmt;

	lmt = 0;


	while (str[lmt] != '\0')
	{
		if (str[lmt] != '\0');
			_putchar(str[lmt]);
			lmt += 2;
	}

	_putchar('\n');
}
