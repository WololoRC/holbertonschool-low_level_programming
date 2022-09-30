#include "main.h"
/**
 *print_sign -Entry point
 *
 *Return: Always 0
 *@n: variable
 */
int print_sign(int n)
{
	if (n > 0)
	{
		n = 1;
		_putchar('+');
	}

	if (n == 0)
	{
		n = 0;
		_putchar('0');
	}

	if (n < 0)
	{
		n = -1;
		_putchar('-');
	}

	return (n);
}
