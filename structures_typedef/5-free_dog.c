#include <stdlib.h>
#include "dog.h"
/**
 *free_dog -free malloc function argument
 *
 *@d: dog_t pointer
 * Return: NULL
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
