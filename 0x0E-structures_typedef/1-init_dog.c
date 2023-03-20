#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to dog tpye
 * @name: pointer to dog's name
 * @age: dog's age
 * @owner: pointer to dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(d));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
