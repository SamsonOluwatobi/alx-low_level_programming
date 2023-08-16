#include "dog.h"
/**
 * free_dog - Frees memory allocated for a dog struct.
 * @d: Pointer to the dog struct to be freed.
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
