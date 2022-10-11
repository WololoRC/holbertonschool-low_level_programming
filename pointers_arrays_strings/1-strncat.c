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
	int len;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while ((dest[len] = *src) > src[n])
	{
		len++;
		src++;
	}

	return (dest);
}
