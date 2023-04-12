#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - allocates memory
 * @*str: is a string
 *
 * Return: NULL
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	char *dup_str = (char *) malloc(strlen(strlen(str) + 1);
			if (dup_str == NULL)
		{
			return (NULL);
		}
		strcpy(dup_str, str);

		return (dup_str);
}
