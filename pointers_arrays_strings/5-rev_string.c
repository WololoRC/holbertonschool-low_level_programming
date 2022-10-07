#include "main.h"
/**
 *rev_string -reverse a string value inside a VAR
 *
 *
 *@s: pointer
 */
void rev_string(char *s)
{
	int lmt, i, aux;

	lmt = 0;

	while (s[lmt] != '\0')
	{
		lmt++;
	}


	for (i = 0; i < (lmt / 2); i++)
	{
		aux = s[i];
		s[i] = s[lmt - i - 1];
		s[lmt - i - 1] = aux;
	}
}
