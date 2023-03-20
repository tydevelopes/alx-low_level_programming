#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: pointer to dog's name
 * @age: dog's age
 * @owner: pointer to dog's owner
 * Return: pointer created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (!d)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
