#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - is a character
 * char: to call a character
 * @size: size of char
 * malloc: it allocates a specific memory
 * @size: to calculate the size of char
 * @c: to create array
 * Return: s
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
