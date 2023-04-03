#include <stdio.h>

/**
 * _memset - set a block of memmory to a specific value
 *  @s: is astring
 *  @n: is an unsigned int
 *  @b: number of byte
 *  Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
