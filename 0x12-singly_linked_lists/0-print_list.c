#include "lists.h"

/**
 * print_list - it prints the element in a linked list
 * @h: is a linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str
