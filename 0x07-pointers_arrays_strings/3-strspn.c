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
	unsigned int len = 0;
	char *p = s;

	while (*p != '\0')
	{
		char *q = accept;

		while (*q != '\0')
		{
			if (*p == *q)
			break;
			q++;
		}
		if (*q == '\0')
		return (len);
		len++;
	p++;
	}
	return (len);
}
