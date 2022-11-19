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
	int bi, cnt, hxc, hxc2;
	unsigned int num;

	if (!b)
		return (0);

	hxc2 = 0;
	hxc = 0;
	num = 0;
	cnt = 0;
	bi = 1;

	while (b[cnt])
	{
		if ((b[cnt] != '1') && (b[cnt] != '0'))
			return (0);
		cnt++;
		hxc2++;
	}

	while (cnt >= 0)
	{
		if (b[cnt] == '1')
		{
			num += bi;
			hxc++;
		}

		bi *= 2;
		cnt--;
	}

	if (hxc == hxc2)
		return (num + 1);

	num /= 2;

	return (num);
}
