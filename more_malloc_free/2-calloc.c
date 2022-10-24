#include <stdlib.h>
#include <string.h>
/**
 **_calloc -allocate memory for an array
 *
 *@nmemb: NUM of bytes
 *@size: size_t of bytes
 * Return: ptr or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
