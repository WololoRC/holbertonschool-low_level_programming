/**
 *_puts_recursion - print a string followed bt a new line with recursion
 *
 *
 *@s: string pointer
 * Return: always 0
 */
#include "main.h"
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;

	_puts_recursion(s);
}
