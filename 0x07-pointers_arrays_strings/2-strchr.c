#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: is a string
 * @c: is a character in a string
 * Return: null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{

		if (*s == c)
		{
			return (s);
		}
		s++;

		if (*s != c)
		return (NULL);
	}
	return (NULL);

}
