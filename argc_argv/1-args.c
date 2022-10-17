/**
 *main -see hoy many items are in argc
 *
 *@argc: count of arguments
 *@argv: arguments vector
 * Return: 0, your god
 */
#include <stdio.h>
int main(int argc, char __attribute__ ((unused)) **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
