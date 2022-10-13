/**
 *_strspn - gets the length of a prefix substring.
 *
 *
 *@s: pointer
 *@accept: pointer
 * Return: cnt
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cnt, len, len2;

	cnt = 0;

	for (len = 0; s[len] != ' '; len++)
	{
		if (s[len] != 32)
		{

			for (len2 = 0; accept[len2] != '\0'; len2++)
			{
				if (accept[len2] == s[len])
				{
					cnt++;
				}
			}
		}
	}

	return (cnt);
}
