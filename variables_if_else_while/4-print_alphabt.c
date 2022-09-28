#include <stdio.h>
/**
 * main -Entry point
 *
 *
 * Return: Always 0
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
		if (alp == 'q')
		{
			alp = 'r';
		}
		if (alp == 'e')
		{
			alp = 'f';
		}
	}

	putchar('\n');

	return (0);
}
