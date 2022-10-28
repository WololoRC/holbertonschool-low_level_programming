#include "dog.h"
#include <stdlib.h>
#include <string.h>
char *_strcpy(char *dest, char *src);
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
	char *n_name = NULL;
	char *n_owner = NULL;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	n_dog->name = _strcpy(n_name, name);
	n_dog->age = age;
	n_dog->owner = _strcpy(n_owner, owner);

	return (n_dog);
}
/**
 **_strcpy -copies a string
 *
 *@src :copy from
 *@dest :copy to
 *Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len;

	len = 0;

	dest = malloc(sizeof(char) * (*src));

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
