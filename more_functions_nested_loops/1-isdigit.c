#include "main.h"
/**
 *_isdigit -looks if c is digit
 *
 *@c: value
 * Return: always 0
 */
int _isdigit(int c)
{
	if (c <= 48 && c <= 57)
		return (1);

	else
		return (0);
}
