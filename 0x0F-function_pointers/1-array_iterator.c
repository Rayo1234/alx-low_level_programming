#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - a function given as a
 * @array: is an array
 * @size: is the size of an array
 * @action: pointer to a function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
