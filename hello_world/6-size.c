#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char charly;
	int tito;
	long loulogio;
	long long largo;
	float feo;

	printf("Size of a char: %ld byte(s)\n", sizeof(charly));
	printf("Size of an int: %ld byte(s)\n", sizeof(tito));
	printf("Size of a long int: %ld byte(s)\n", sizeof(loulogio));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(largo));
	printf("Size of a float: %ld byte(s)\n", sizeof(feo));

	return (0);
}
