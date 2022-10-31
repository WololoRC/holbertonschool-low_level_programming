#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 *main -Entry point
 *
 *@argc: arg counter
 *@argv: arg vector
 *
 * Return: 0 or Error
 */
int main(int argc, char *argv[3])
{
	int a;
	int b;
	char *op;

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if ((*op == '/' || *op == '%') && (a == 0 || b == 0))
	{
		printf("Error\n");
		return (100);
	}

	if (*op != '+' && (*op != '-') && (*op != '/') && (*op != '%') && *op != '*')
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", (*get_op_func(op))(a, b));

	return (0);
}
