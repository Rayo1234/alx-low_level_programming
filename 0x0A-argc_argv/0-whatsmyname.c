#include "main.h"
#include <stdio.h>

/**
 * main - is the standard library
 * @argv: string to argc
 * @argc: command line argument
 * Return: name
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

