#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_dog -print the data of your dog
 *
 *
 *@d: pointer of dog datatype
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		d->name = "(Nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(Nil)";
	}

	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
