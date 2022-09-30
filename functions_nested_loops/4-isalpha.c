#include <stdio.h>
/**
 *_isalpha -Entry point
 *
 *
 *Return: Always 0
 *@c: variable
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		c = 1;

	else if (c >= 97 && c <= 122)
		c = 1;

	else
		c = 0;

	return (c);
}
