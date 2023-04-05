#include <stdio.h>

/**
 * _print_rev_recursion - is the standard library
 * @s: is a character
 * Return : o
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		{
			putchar('\n');
			return;
		}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
