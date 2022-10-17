/**
 *main -function that MUL with arguments
 *
 *@argc: arg cnt
 *@argv: arg vector
 *
 * Return: Always 0.
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int result, cnt, mul;

	result = 1;

	if (argc != 3)
	{
		printf("Error\n");
	}

	else
	{
		for (cnt = 1; cnt < argc; cnt++)
		{
			mul = strtol(argv[cnt], NULL, 10);
			result = result * mul;
		}

		printf("%d\n", result);
	}

	return (0);
}
