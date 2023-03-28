#include "main.h"
/**
 * _strlen - for counting string length
 * @s: strings whosr length is printed
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
