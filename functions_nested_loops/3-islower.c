#include <stdio.h>
int _islower(int c)
{
	if (c <= 122 && c >= 97 )
		c = 1;
	else
		c = 0;	

	return (c);
}
