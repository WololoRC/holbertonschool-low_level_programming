#include <stdlib.h>
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

	cntCat = 0;
	cntCat2 = 0;

	cnt = str_len(s1);
	cnt2 = str_len(s2);

	str_concat = malloc(sizeof(char) * (cnt + cnt2));

	if (str_concat == NULL)
	{
		return (NULL);
	}

	while (s1[cntCat] != '\0')
	{
		str_concat[cntCat] = s1[cntCat];
		cntCat++;
	}

	for (; s2[cntCat2] != '\0'; cntCat2++)
	{
		str_concat[cntCat] = s2[cntCat2];
		cntCat++;
	}

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
