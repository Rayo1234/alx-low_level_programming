#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - is a function
 * @array: is an array
 * @size: size of an array
 * @cmp: to compy
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
