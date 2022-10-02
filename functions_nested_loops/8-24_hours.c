#include "main.h"
/**
 *jack_bauer -Function
 *
 *
 *Return: Always 0
 */
void jack_bauer(void)
{
	int mn, hur;

	for (hur = 0; hur <= 23; hur++)
	{
		for (mn = 0; mn <= 59; mn++)
		{

		_putchar((hur / 10) + 48);
		_putchar((hur % 10) + 48);
		_putchar(':');
		_putchar((mn / 10) + 48);
		_putchar((mn % 10) + 48);
		_putchar('\n');

		}
	}
}
