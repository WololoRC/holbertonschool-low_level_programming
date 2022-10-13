/**
 **_strchr - moves *s until find c
 *
 *@s: pointer on a string
 *@c: char to find
 *
 * Return: *s
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}

	return (s);
}
