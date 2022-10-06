/**
 *_strlen -counts chat bytes
 *
 *@s: pointer
 *Return: cnt
 */
int _strlen(char *s)
{
	int cnt = 0;

	while (*s != '\0')
	{
		cnt++;
		s++;
	}

	return (cnt);
}
