/**
 *_strlen_recursion - gives you lenght
 *
 *@s: string pointer
 * Return: length of a string.
 */
#include "main.h"
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
