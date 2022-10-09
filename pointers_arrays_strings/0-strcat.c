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
	int len, len2;

	len = 0;
	len2 = 0;


	while (dest[len] != '\0')
	{
		len++;
	}

	while ((dest[len + len2] = *src++) != '\0')
	{
		len2++;
	}

	return (dest);
}
