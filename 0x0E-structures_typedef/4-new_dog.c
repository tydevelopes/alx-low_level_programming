#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: pointer to dog's name
 * @age: dog's age
 * @owner: pointer to dog's owner
 * Return: pointer created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_len;
	unsigned int owner_len;
	char *nptr;
	char *optr;
	dog_t *d;

	if (!name || age < 0 || !owner)
		return (NULL);

	d = malloc(sizeof(dog_t));

	if (!d)
		return (NULL);

	name_len = strlen(name);
	owner_len = strlen(owner);

	nptr = malloc(sizeof(char) * (name_len + 1));
	if (!nptr)
		return (NULL);
	optr = malloc(sizeof(char) * (owner_len + 1));

	if (!optr)
		return (NULL);

	strcpy(nptr, name);
	strcpy(optr, owner);

	d->name = nptr;
	d->age = age;
	d->owner = optr;

	return (d);
}
