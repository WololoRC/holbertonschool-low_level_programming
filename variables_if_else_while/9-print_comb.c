#include <stdio.h>
/**
 * main -Entry point
 *
 *
 * Return: Always 0
 */
int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;

		while (i == '9')
		{
			putchar('9');
			putchar('\n');
			i++;
		}
	}




	return (0);
}
