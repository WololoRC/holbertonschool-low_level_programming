/**
 **malloc_checked -allocates on memory any bytes of any type size
 *
 *
 *@b: byts and size type
 *
 * Return: pointer
 */
#include <stdlib.h>
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(ptr) * b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
