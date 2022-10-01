#include <stdio.h>
#include "main.h"
/**
 *print_last_digit -Entry point
 *
 *Return: Always: 1
 *@n: variable
 */
int print_last_digit(int n)
{
	int x;

	if (n > 10)
	{
		n = n % 10;
		n = n + 48;
	}

	if (n < 10 && n != -1)
	{
		n = n + 48;
	}

	if (n < 0)
	{
		n = n * -1;
		n = n % 10;
		n = n + 48 - 2;

	}

	if (n == 100)
	{
		n = n - 48;
	}

	_putchar(n);

	return (n);
}
