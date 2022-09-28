#include <stdio.h>
/**
 * main -Entry point
 *
 *
 * Return: Always 0
 */
int main(void)
{
	char pla = '0';

	while (pla >= '16')
	{
		putchar(pla);
		pla++;
	}

	putchar('\n');
	return (0);
}
