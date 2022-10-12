/**
 **cap_string -Capitalize the words of a string, might.
 *
 *@str: string
 * Return: str
 */
char *cap_string(char *str)
{
	int len, len2;

	char cmp[13] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', 9, 10};

	for (len = 0; str[len] != '\0'; len++)
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] -= 32;
		}

		for (len2 = 0; len2 < 13; len2++)
		{
			if (str[len] == cmp[len2])
			{
				if (str[len + 1] >= 97 && str[len + 1] <= 122)
				{
					str[len + 1] = str[len + 1] - 32;
				}
			}
		}
	}

	return (str);
}
