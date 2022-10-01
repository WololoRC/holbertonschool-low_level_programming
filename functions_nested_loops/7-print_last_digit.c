#include <stdio.h>
#include "main.h"
/**
 *print_last_digit -Entry point
 *
 *Return: Always: 0
 *@n: variable
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n /= -1;
	}

	_putchar(48 + n);
	return (n);
}
