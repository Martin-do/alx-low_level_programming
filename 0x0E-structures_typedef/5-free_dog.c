#include "dog.h"

/**
 * free_dog - frees the memory a dog has been allocated to
 * @d: an instance of type struct dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
