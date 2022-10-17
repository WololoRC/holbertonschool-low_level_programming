/**
 *main -function that add with arguments
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
	int result, cnt, cnt2, add;

	result = 0;

	for (cnt = 1; cnt < argc; cnt++)
	{
		for (cnt2 = 0; *(argv[cnt] + cnt2) != '\0'; cnt2++)
		{
			if (*(argv[cnt] + cnt2) >= 'A' && (*(argv[cnt] + cnt2) <= 'z'))
			{
				printf("Error\n");
				return (1);
			}
		}

		add = strtol(argv[cnt], NULL, 10);
		result = result + add;
	}

	printf("%d\n", result);

	return (0);
}
