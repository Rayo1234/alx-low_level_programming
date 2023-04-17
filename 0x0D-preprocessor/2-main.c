#include <stdlib.h>
#include <stdio.h>

#define STR(s) #s
#define FILE_LINE(file, line) STR(file) ":" STR(line)


/**
 * main - is a function
 *
 * Return: 0
 */
int main(void)
{
	const char *file_line = FILE_LINE(__FILE__, __LINE__);
	const char *p = file_line;

	while (*p)
		putchar(*p++);

	return (EXIT_SUCCESS);

}
