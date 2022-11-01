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
	int cnt = 1;

	if (s && n)
	{
		va_list nums;

		va_start(nums, n);

		printf("%d", va_arg(nums, int));

		while (cnt < n)
		{
			printf("%s", s);
			printf("%d", va_arg(nums, int));

			cnt++;
		}

		printf("\n");
	}
}
