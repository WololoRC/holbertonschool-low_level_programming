/**
 **_strcpy -copies a string
 *
 *@src :copy from
 *@dest :copy to
 *Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len;

	len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}

	return (dest);
}
