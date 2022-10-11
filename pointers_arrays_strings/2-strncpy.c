/**
 **_strncpy -copy string n bytes
 *
 *@dest: string copied
 *@src: string to copy
 *@n: NUM of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len;

	len = 0;

	{
		while (len < n && src[n] != '\0')
		{
			dest[len] = src[len];
			len++;
		}

		while (len < n)
		{
			dest[len] = '\0';
			len++;
		}
	}

	return (dest);
}
