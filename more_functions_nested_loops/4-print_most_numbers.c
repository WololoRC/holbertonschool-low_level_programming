#include "main.h"
/**
 *print_most_numbers - print num char of 0 to 9 exepting the 2 and 4
 *
 *
 *
 *
 */
void print_most_numbers(void)
{
	int aZ;

	for (aZ = 0; aZ <= 9; aZ++)
	{
		if (aZ == 2)
		{
			aZ = 3;
		}

		else if (aZ == 4)
		{
			aZ = 5;
		}

		_putchar((aZ + 48));



		if (aZ == 9)
			_putchar('\n');
	}
}
