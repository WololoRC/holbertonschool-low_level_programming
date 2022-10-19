/**
 *create_array -makes and a array of a single character
 *
 *
 *@size: size of the array
 *@c: char to put in array
 *
 * Return: NULL or array
 */
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	char *ar_ptr;
	unsigned int cnt;

	ar_ptr = malloc(sizeof(*ar_ptr) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (ar_ptr == NULL)
	{
		return (NULL);
	}

	for (cnt = 0; cnt < size; cnt++)
	{
		ar_ptr[cnt] = c;
	}

	return (ar_ptr);
}
