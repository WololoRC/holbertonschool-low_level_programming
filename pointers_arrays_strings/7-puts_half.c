#include "main.h"
/**
 *puts_half -function
 *
 *
 *@str: pointer
 */
void puts_half(char *str)
{
	int len, len2;

	len2 = 0;
	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	len2 = len / 2;

	if ((len % 2) == 1)
	{
		len2 = ((len + 1) / 2);
	}

	while (str[len2] != '\0')
	{
		{
			_putchar(str[len2]);
			len2++;
		}
	}

	_putchar('\n');
}
