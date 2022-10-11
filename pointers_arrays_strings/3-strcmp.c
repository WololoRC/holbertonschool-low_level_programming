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
	int ret, cmp1, cmp2;

	cmp1 = s1[0];
	cmp2 = s2[0];

	if (s1[0] == s2[0])
	{
		ret = 0;
	}

	else if (s1[0] < s2[0])
	{
		ret = cmp1 - cmp2;
	}

	else if (s1[0] > s2[0])
	{
		ret = cmp1 - cmp2;
	}

	return (ret);
}
