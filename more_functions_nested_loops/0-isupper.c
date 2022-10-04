#include "main.h"
/**
 *_isupper -Returns 1 if c is uppercase
 *
 *@c: value
 * Return: Value of c
 */
int _isupper(int c)
{
	if (c <= 65 && c <= 90)
		c = 1;
	else
		c = 0;

	return (c);
}
