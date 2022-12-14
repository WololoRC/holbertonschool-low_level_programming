#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 **str_concat -Return concatenated strings allocated in a new space of memory
 *
 *@s1: string to concatenate
 *@s2: string to concateante
 * Return: pointer to str concatenated or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int cnt, cnt2, cntCat, cntCat2;
	char *str_concat = NULL;

	cntCat2 = 0;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	cnt = str_len(s1);
	cnt2 = str_len(s2);

	if (cnt == 0 && cnt2 == 0)
	{
		cnt = 2;
		cnt2 = 2;
		s1 = "";
		s2 = "";
	}

	str_concat = malloc(sizeof(char) * (cnt + cnt2 + 1));

	if (str_concat == NULL)
	{
		return (NULL);
	}
	for (cntCat = 0; s1[cntCat] != '\0'; cntCat++)
	{
		str_concat[cntCat] = s1[cntCat];
	}
	for (cntCat2 = 0; s2[cntCat2] != '\0'; cntCat2++, cntCat++)
	{
		str_concat[cntCat] = s2[cntCat2];
	}

	str_concat[cntCat] = '\0';
	return (str_concat);
}
/**
 *str_len -gives you the lenght of a string
 *
 *@str: string pointer
 * Return: cnt(lenght count)
 */
int str_len(char *str)
{
	int cnt = 0;

	while (str[cnt] != '\0')
	{
		cnt++;
	}

	return (cnt);
}
