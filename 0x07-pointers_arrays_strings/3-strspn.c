#include <stdio.h>
#include <string.h>

/**
 * _strspn - gets length of a substring
 * @s: is a character
 * @accept: contains byte
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				break;
			}
		if (accept[j] == '\0')
			return (i);
		}
	return (i);

}
