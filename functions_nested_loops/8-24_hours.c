#include "main.h"
/**
 *jack_bauer -Function
 *
 *
 *Return: Always 0
 */
void jack_bauer(void)
{
	int min, hour;

	hour = 0;
	min = 0;


	while (hour <= 23)
	{
		while (min <= 59)
		{

		_putchar((hour / 10) + 48);
		_putchar((hour % 10) + 48);
		_putchar(':');
		_putchar((min / 10) + 48);
		_putchar((min % 10) + 48);
		_putchar('\n');
		min++;

		}
	hour++;
	}
}
