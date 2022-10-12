/**
 **leet -encode a string into 1337
 *
 *@str: string
 * Return: str STRING ENCODED
 */
char *leet(char *str)
{
	int len, len2;

	char let[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (len = 0; str[len] != '\0'; len++)
	{
		for (len2 = 0; len2 <= 9; len2++)
		{
			if (str[len] == let[len2])
			{
				str[len] = num[len2];
			}
		}
	}

	return (str);
}
