#include "main.h"
/**
 *print_numbers -print numbers of 0 to 9
 *
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int aZ;

	for (aZ = 0; aZ <= 9; aZ++)
	{
		_putchar((aZ + 48));

		if (aZ == 9)
			_putchar('\n');
	}
}
