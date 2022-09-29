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
	char alp = 'a';


	while (pla <= '9')
	{
		putchar(pla);

		if (pla == '9')
		while (alp <= 'f')
		{
			putchar(alp);
			alp++;
		}

		pla++;
	}


	putchar('\n');

	return (0);
}
