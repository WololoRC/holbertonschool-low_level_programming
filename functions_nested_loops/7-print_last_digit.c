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
	n = n % 10; // ultima leta plz 

	if (n < 0)
	{
		n /= -1; // pasa al valor total en caso de que nos tiren num negativo
	}

	_putchar(48 + n);  // "48" es el valor ASCII del char '0'. = 'imprimi char '0' junto con n'
	return (n);
}
