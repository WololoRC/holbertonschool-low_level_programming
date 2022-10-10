/**
 **_strcat -concatenates two string
 *
 *@dest: pointer to dest
 *@src: pointer to string for concatenate
 *
 * Return: string concatenated
 */
char *_strcat(char *dest, char *src)
{
	int len;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while ((dest[len] = *src) != '\0')
	{
		src++;
		len++;
	}

	return (dest);
}
