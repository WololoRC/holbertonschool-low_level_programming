#include "1-alphabet.c"
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


	while (i <= 10)
	{
		print_alphabet();
		i++;
	}
}
