#include "main.h"
/**
 *main -Entry point
 *
 *
 * Return: Always 0
 */
void print_alphabet(void);
int main(void)
{
	int alp;
	int nw;

	nw = '\n';

	alp = 97;
	while (alp <= 122)
	{
		_putchar(alp);
		_putchar(nw);
		alp++;
	}
	return (0);
}
