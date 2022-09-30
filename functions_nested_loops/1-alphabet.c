#include "main.h"
/**
 *print_alphabet -Entry point
 *
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int alp;
	int nw;

	nw = '\n';
	alp = 97;

	while (alp <= 122)
	{
		_putchar(alp);
		alp++;

	}
	_putchar(nw);
}
