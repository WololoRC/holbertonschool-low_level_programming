/**
 **_memcpy - copyes n bytes *form src in *dest
 *
 *@src: pointer to memory to copye
 *@dest: pointer to dest
 *@n: NUM of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int fill;

	fill = 0;

	while (fill < n)
	{
		dest[fill] = src[fill];
		fill++;
	}

	return (dest);
}
