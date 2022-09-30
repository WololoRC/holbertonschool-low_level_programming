#include <stdio.h>
int _islower(int c)
{
	int x;



	if (x <= 'z' || x >= 'a')
		x = 1;
	else
		x = 0;	

	return (x);
}
