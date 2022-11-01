#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *print_strings - print strings within separator
 *
 *@s: pointer to separator
 *@n: NUM of args
 */
void print_strings(char *s, const unsigned int n, ...)
{
	unsigned int cnt = 0;
	char *str = NULL;

	va_list strs;

	va_start(strs, n);

	while (cnt < n)
	{
		str = va_arg(strs, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}

		else
		{
			printf("nil");
		}

		if (cnt < (n - 1) && (n))
		{
			printf("%s", s);
		}

		cnt++;
	}

	printf("\n");
}
