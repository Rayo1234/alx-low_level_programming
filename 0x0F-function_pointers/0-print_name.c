#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - is a function
 * @name: is a pointer
 * @f: is a function
 *
 * Return : 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
