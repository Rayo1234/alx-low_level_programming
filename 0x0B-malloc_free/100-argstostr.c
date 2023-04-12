#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenate argument
 * @av: argument
 * @ac: new string
 * Return: NULL
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULLL);

	int length = 0;

	for (i = 0, count = 0; i < ac; i++)
	length += strlen(av[i]) + 1;

	char *str = (char *) malloc(length * sizeof(char));

	if (str == NULL)
	return (NULL);

	int index = 0;

	for (int i = 0; i < ac; i++)
	{
		strcpy(&str[index], av[i]);
		index += strlen(av[i]);
		str[index] = '\n';
		index++;
	}
	return (str);
}
