#include "main.h"
/**
 *get_bit - returns the value of a bit at a given index
 *
 *@n: NUM
 *@index: S/T
 * Return: value of bit on succes, -1 if fails.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int cnt, in_bit, ret;

	cnt = 0;
	in_bit = 1;

	if (!n || index > sizeof(n))
		return (-1);

	while (cnt <= index)
	{
		in_bit *= 2;
		cnt++;
	}

	in_bit /= 2;

	if (n & in_bit)
		ret = 1;

	else
		ret = 0;

	return (ret);
}
