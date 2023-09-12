#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - A function that initialize a variable of type struct dog.
 * @d: input
 * @name: input
 * @age: input
 * @owner: input
 * Return: 0 (success).
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
