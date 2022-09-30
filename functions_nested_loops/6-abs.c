#include <stdio.h>
/**
 *_abs -Entry point
 *
 *
 *Return: Always 0
 *@i: variable
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = ((i * (-1)));
	}

	return (i);
}
