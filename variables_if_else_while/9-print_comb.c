#include <stdio.h>
/**
 * main -Entry point
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 48;




	while (i <= 57)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		
		if (i == '9')
		{
			putchar('\n');
		}
		i++;

		
	
		
	}




	return (0);
}
