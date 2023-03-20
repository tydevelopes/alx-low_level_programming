#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog
 * @d: pointer to struct dog
 */
void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
