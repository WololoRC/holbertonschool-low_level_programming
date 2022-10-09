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

	for (len = 0; src[len] >= '\0'; len++)
	{
		dest[len] = src[len];
	}
	return (dest);
}
