#include "dog.h"
/**
 *init_dog -initialize a VAR of type dog
 *
 *@d: dog type pointer
 *@name: name deference
 *@age: age deference
 *@owner: owner deference
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}