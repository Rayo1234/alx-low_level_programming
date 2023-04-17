#include <stdlib.h>
#include <stdio.h>

/**
 * main - is a function
 *
 * Return: 0
 */
int main()
{
	const char* file_name = __FILE__;

	while (*file_name)
	{
		putchar(*file_name);
		++file_name;
	}
	putchar('\n');
	return (0);

}
