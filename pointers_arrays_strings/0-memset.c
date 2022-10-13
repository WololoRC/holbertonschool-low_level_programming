/**
 **_memset - fills n bytes of char type in memory pointed by *s
 *
 *@s: pointer to memory
 *@b: type of bytes
 *@n: NUM of bytes
 *
 * Return: *s mod
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int fill;

	fill = 0;

	while (fill < n)
	{
		s[fill]	= b;
		fill++;
	}

	return (s);
}
