/**
 **_strdup -duplicates a string allocated in a new memory space
 *
 *@str: string to copy
 * Return: pointer or NULL
 */
#include <stdlib.h>
char *_strdup(char *str)
{
	int cnt, cnt1;
	char *str_dup = NULL;

	cnt = 0;
	cnt1 = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[cnt] != '\0')
	{
		cnt++;
	}

	str_dup = malloc(sizeof(char) * cnt + 1);

	if (str_dup == NULL)
	{
		return (NULL);
	}

	while (str[cnt1] != '\0')
	{
		str_dup[cnt1] = str[cnt1];
		cnt1++;
	}

	return (str_dup);
}
