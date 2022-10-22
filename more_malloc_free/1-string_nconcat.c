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

	if (!s1)
	{
		cnt = 2;
		s1 = "";
	}

	if (!s2)
	{
		n = 2;
		s2 = "";
	}

	ptr = malloc(sizeof(char) * (cnt + n));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (cnt = 0; s1[cnt] != '\0'; cnt++)
	{
		ptr[cnt] = s1[cnt];
	}

	for (cnt2 = 0; s2[cnt2] != s2[n]; cnt2++, cnt++)
	{
		ptr[cnt] = s2[cnt2];
	}

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
