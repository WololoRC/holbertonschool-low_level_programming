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
/**
 *print_alphabet_x10 -Entry point
 *
 *
 *Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;


	while (i <= 9)
	{
		print_alphabet();
		i++;
	}
}
