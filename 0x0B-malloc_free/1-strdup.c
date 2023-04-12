#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - allocates memory
 * @str: is a string
 * Return: NULL
 */

char *_strdup(char *str)
{
	char *bb;
	int i;

	int p = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;
	bb = malloc(sizeof(char) * (1 + i));

			if (bb == NULL)
			return (NULL);

		for (p = 0; str[p]; p++)
			bb[p] = str[p];
		return (bb);
}
