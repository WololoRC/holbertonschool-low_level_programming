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


	for (;len < n && src[n] != '\0'; len++)
	{
		dest[len] = src[len];
	}

	for (;len < n; len++)
	{
		dest[len] = '\0';
	}


	return (dest);
}
