#include "main.h"
/**
 *flip_bits - flip to get from one number to another
 *
 *@n: number 1
 *@m: number 2
 * Return: NUM of bits (cnt);
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			cnt++;

		m = m >> 1;
		n = n >> 1;
	}

	return (cnt);
}
