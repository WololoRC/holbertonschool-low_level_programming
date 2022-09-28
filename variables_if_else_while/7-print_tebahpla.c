#include <stdio.h>
/**
 * main -Entry point
 *
 *
 * Return: Always 0
 */
int main(void)
{
	char pla = 'z';

	while (pla >= 'a')
	{
		putchar(pla);
		pla--;
	}

	putchar('\n');
	return (0);
}
