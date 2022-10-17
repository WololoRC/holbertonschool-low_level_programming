/**
 *main -see the name inside argv
 *
 *@argc: arg count
 *@argv: array of arg's
 *
 * Return: 0, your god..
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	int cnt;

	for (cnt = 0; cnt < argc; cnt++)
	{
		printf("%s\n", argv[cnt]);
	}

	return (0);
}
