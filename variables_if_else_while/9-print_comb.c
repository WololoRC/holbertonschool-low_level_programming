#include <stdio.h>
/**
 * main -Entry point
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}

		if (i == 57)
		{
			putchar('\n');
		}

		i++;
	}
	return (0);
}
