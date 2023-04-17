#include <stdio.h>
#include "dog.h"

/**
 * print_dog - is a function
 * struct dog - is a defined type
 * @d: is a pointer
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
		return;
	}

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	
	printf("\n");

	return;
}
