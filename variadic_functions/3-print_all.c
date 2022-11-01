#include <stdio.h>
#include <stdarg.h>
void print_all(const char * const format, ...)
{
	int cnt2 = 0, cnt = 2;
	va_list objs;

	while (format[cnt] != '\0')
	{
		cnt++;
	}

	va_start(objs, format);

	while (format[cnt2] != '\0')
	{
		switch (format[cnt2])
		{
			case 'c':

			printf("%c", va_arg(objs, int));
			break;

			case 'i':

			printf("%d", va_arg(objs, int));
			break;

			case 'f':

			printf("%f", va_arg(objs, double));
			break;

			case 's':
			printf("%s", va_arg(objs, char *));
			break;
		}

		if (cnt2 < (cnt - 1))
		{
			printf(", ");
		}

		cnt2++;
	}

	printf("\n");
}
