#include <stdio.h>


int main(void)
{
	char alp1 = 'a';
	char alp2 = 'A';

	while ( alp1 <= 'z')
	{
		putchar(alp1);
		alp1++;
	}



	while ( alp2 <= 'Z')
	{
		putchar(alp2);
		alp2++;
	}



	return (0);
}
