#include <stdio.h>
#include <stdarg.h>
/**
 *print_all - print all
 *
 *@format: we dont learn about switch yet
 */
void print_all(const char * const format, ...)
{
	int cnt2 = 0;
	va_list objs;

	if (format)
	{
		va_start(objs, format);

		while (format[cnt2] != '\0')
		{
			switch (format[cnt2])
			{
				case 'c':

				printf("%c, ", va_arg(objs, int));
				break;

				case 'i':

				printf("%d, ", va_arg(objs, int));
				break;

				case 'f':

				printf("%fi, ", va_arg(objs, double));
				break;

				case 's':
				printf("%s", va_arg(objs, char *));
				break;
			}

			cnt2++;
		}
	}
	printf("\n");
}
