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
	void *ptr = NULL;

	ptr = malloc(sizeof(ptr) + (b - 8));

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
