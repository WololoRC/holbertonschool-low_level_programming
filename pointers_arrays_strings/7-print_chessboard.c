#include <stdio.h>
/**
 *print_chessboard - pritns a chessboard
 *
 *@a: bidimensional array
 *
 */
void print_chessboard(char (*a)[8])
{
	int hor, ver;

	for (hor = 0 ; hor <= 7; hor++)
	{
		for (ver = 0; ver <= 7; ver++)
		{
			printf("%c", a[hor][ver]);
		}

		printf("\n");
	}

}
