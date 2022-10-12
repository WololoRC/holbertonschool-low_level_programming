char *_memset(char *s, char b, unsigned int n)
{
	while (*s)
	{
		*s = b; 
		s++;
	}
}
