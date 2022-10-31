#include <stdlib.h>
#include <stdio.h>
#include "calc.h"
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
	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		return (98);
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char *op = argv[2];

	if (*op == '/' || *op == '%' && (argv[1] == 0 || argv[3] == 0))
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
