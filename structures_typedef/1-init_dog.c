#include "dog.h"
#include <stddef.h>

/**
 * init_dog - inicializes a poppy
 *@d: pointer to the poppy
 *@name: poppy's name
 *@age: poppy's age
 *@owner: owner's name
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
