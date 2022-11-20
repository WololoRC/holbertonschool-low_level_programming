#include "main.h"
/**
 *celar_bit - sets the value of a bit to 0 at a given index
 *
 *@n: NUM
 *@index: bit
 *
 * Return: 1 on success, -1 if fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bi = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
