#include <stdio.h>
/**
 * main -Entry point
 *
 *
 * Return: Always 0
 */
int main(void)
{
	char i = '0';
	int cnt;



	while (i <= '9')
	{
		putchar(i);
		if (i == '9')
		{
			putchar('\n');
		}

		putchar(',');
		putchar(' ');
		i++;
	}




	return (0);
}
