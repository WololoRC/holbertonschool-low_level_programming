#include "main.h"
/**
 *binary_to_uint - converts a binary number to an unsigned int
 *
 *@b: string with binary orders
 *
 * Return: @num on success, 0 if fails.
 */
unsigned int binary_to_uint(const char *b)
{
	int bi, cnt;
	unsigned int num;

	num = 0;
	cnt = 0;
	bi = 1;

	while (b[cnt])
	{
		if ((b[cnt] != '1') && (b[cnt] != '0'))
			return (0);
		cnt++;
	}

	while (cnt >= 0)
	{
		if (b[cnt] == '1')
		{
			num += bi;
		}

		bi *= 2;
		cnt--;
	}

	num /= 2;

	return (num);
}
