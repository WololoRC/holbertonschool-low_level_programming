/**
 *string_toupper -uppercase a string
 *
 *@str: pointer to string
 * Return: str
 */
char *string_toupper(char *str)
{
	int len;

	for (len = 0 ; str[len] != '\0'; len++)
	{
		if (str[len] >= 'a' && str[len] <= 'z')
		{
			str[len] = str[len] - 32;
		}
	}

	return (str);
}
