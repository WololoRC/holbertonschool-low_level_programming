/**
 *_strlen -returns the lenght of a string
 *
 *
 *@s: string pointer
 * Return: lenght
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
