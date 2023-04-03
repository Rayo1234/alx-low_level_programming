#include <stdio.h>

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: is a pointer
 * @src: is a memory area
 * @n: is an integer
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}
	return (dest);

}
