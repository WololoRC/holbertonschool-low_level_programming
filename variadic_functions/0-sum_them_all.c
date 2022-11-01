#include <stdarg.h>
/**
 *sum_them_all - add any arguments as you wish
 *
 *@n: NUM of arguments
 *
 * Return: x or 0 if no arguments are pass
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x = 0;
	unsigned int i;

	if (n != 0)
	{
		va_list nums;

		va_start(nums, n);

		for (i = 0; i < n; i++)
		{
			x = x + (va_arg(nums, int));
		}

		return (x);
	}

	else
	{
		return (0);
	}
}
