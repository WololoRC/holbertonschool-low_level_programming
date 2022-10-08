
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


	for (; str[lmt] != '\0'; lmt++)
	{
		if ((lmt % 2) == 0)
		{
			_putchar(str[lmt]);
		}
		else
			continue;
	}

	_putchar('\n');
}
