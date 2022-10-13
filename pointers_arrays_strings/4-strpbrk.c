/**
 **_strpbrk -write a string before a match of bytes
 *
 *@s: string
 *@accept: string with byts matched
 * Return: NULL or s[len]
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int len, len2;

	for (len = 0; s[len] != '\0'; len++)
	{
		if (s[len] != '\0')
		{
			for (len2 = 0; accept[len2] != '\0'; len2++)
			{
				if (accept[len2] == s[len])
				{
					return (s + len);
				}
			}
		}
	}

	return (0);
}
