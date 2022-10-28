#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 *new_dog - change the values of the VAR's of strucutre dog_t
 *
 *@name: string pointer
 *@age: float VAR
 *@owner: string pointer
 *
 * Return: n_dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
	{
		return (NULL);
	}

	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;

	return (n_dog);
}
