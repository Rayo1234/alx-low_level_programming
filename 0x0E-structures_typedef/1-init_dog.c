#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - initializes a dog struct with type
 * @d: is a structure type
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
		return;

	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
