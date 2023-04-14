#include "main.h"
/**
 * _strcat - Concatenates two strings.
 *
 * Description: This function appends the contents of the source string
 * to the end of the destination string, overwriting the null byte at
 * the end of the destination string, and then adds a terminating null
 * byte. Assumes that the destination string has enough space to hold
 * the concatenated string.
 *
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string.
 *
 * Return: A pointer to the destination string.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;


	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
