#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 **string_nconcat -concat n bytes of s2 in s1
 *
 *@n: bytes
 *@s1: dest
 *@s2: source
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int cnt, cnt2;
	char *ptr;

	cnt = str_len(s1);

	ptr = malloc(sizeof(char) * (cnt + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (cnt = 0; s1[cnt] != '\0'; cnt++)
	{
		ptr[cnt] = s1[cnt];
	}

	for (cnt2 = 0; cnt2 <= n && s2[cnt2] != '\0'; cnt2++, cnt++)
	{
		ptr[cnt] = s2[cnt2];

		ptr = realloc(ptr, sizeof(char) * (cnt + cnt2 + 1));
	}

	ptr[cnt - 1] = '\0';

	return (ptr);
}
/**
 *str_len -gives you the lenght of a stirng
 *
 *@str: string pointer
 * Return: cnt
 */
int str_len(char *str)
{
	int cnt;

	cnt = 0;

	while (str[cnt] != '\0')
	{
		cnt++;
	}

	return (cnt);
}
