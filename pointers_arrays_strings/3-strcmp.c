/**
 *_strcmp -Compare two strings
 *
 *@s1: string
 *@s2: string
 *
 * Return: ret
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s2 != '\0') && (*s1 != '\0'))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
