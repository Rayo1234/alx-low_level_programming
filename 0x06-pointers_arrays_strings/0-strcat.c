#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: is the destination string
 * @src: the source string to be appended to dest
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);
		while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}

