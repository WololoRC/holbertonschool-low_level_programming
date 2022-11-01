#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - print numbers within separator
 *
 *@s: pointer to separator
 *@n: NUM of args
 */
void print_numbers(char *s, const unsigned int n, ...)
{
	unsigned int cnt = 1;

	va_list nums;

	va_start(nums, n);

	if (n > 0)
	{
		printf("%d", va_arg(nums, int));

		while (cnt < n)
		{
			if (s)
			{	
				printf("%s", s);
			}

			printf("%d", va_arg(nums, int));

			cnt++;
		}
	}

	printf("\n");
}
