/**
 **_strstr - locate a substring
 *
 *
 *@haystack: string
 *@needle: substring
 * Return: substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int len;

	for (len = 0; haystack[len] != '\0'; len++)
	{
		if (needle[0] == '\0')
		{
			return (haystack + 0);
		}

		else if (needle[0] == haystack[len] && (needle[1] == haystack[len + 1]))
		{
			return (haystack + len);
		}

	}
	return (0);
}
