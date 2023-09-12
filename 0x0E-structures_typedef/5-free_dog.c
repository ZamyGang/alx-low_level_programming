#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - A function that frees dogs.
 * @d: input
 * Return: 0 (success).
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
