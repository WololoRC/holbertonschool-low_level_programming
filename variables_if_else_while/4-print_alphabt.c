#include <stdio.h>


int main(void)
{
	char alp = 'a';

	while ( alp <= 'z')
	{
		putchar(alp);
		alp++;
	}

	putchar('\n');

	return (0);
}
