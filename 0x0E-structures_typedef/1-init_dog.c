#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dog
	{
		char *name;
		float age;
		char *owner;
	};

/**
 * struct dog - is a function
 * @d: is a structure type
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
