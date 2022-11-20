#include "main.h"
/**
 *set_bit - sets the value of a bit to 1 at a given index
 *
 *@n: NUM
 *@index: bit index
 * Return: @n modificated, -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bi, cnt;

	if (!n || index > sizeof(unsigned long int))
		return (-1);

	bi = 1;
	cnt = 1;

	while (cnt <= index)
	{
		bi *= 2;
		cnt++;
	}

	*n += bi;

	return (1);
}
