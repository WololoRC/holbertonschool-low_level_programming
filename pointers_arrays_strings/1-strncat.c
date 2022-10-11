/**
 **_strncat -concatenates n bytes of src into dest
 *
 *@dest: string
 *@src: string
 *
 *@n: num of bytes
 * Return: new state of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, len2;

	len = 0;
	len2 = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (; len2 < n && src[len2] != '\0'; len2++)
	{
		dest[len + len2] = src[len2];
	}

	dest[len + len2] = '\0';

	return (dest);
}
