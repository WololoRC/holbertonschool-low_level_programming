#ifndef dog_h
#define dog_h

/**
 *struct dog -a someones dog record data
 *
 *@name: name of dog
 *@age: age of dog
 *@owner: name of the owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
