#include <stdio.h>

/**
 * _puts_recursion - used to get fibbonnocia
 * @s: is a character void: is the library
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{	putchar('\n');
		return;
	}
		putchar (*s);
		_puts_recursion(s + 1);
	return;
}
