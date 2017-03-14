#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - var for type struct dog
 * @d: struct dog
 * @name: string for name
 * @age: age
 * @owner: owners age
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
