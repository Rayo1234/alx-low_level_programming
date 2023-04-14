#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - cause normal process termination
 * @b: allocated memory
 * Return: returns pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);

	return (i);
}
