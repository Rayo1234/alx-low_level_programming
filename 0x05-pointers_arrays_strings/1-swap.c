#include "main.h"
/**
 * swap_int - swap value
 * @a: value 2
 * @b: value 3
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
