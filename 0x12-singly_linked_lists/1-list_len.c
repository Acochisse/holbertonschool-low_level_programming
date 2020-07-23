#include "lists.h"

/**
 * list_len - returns count of elements in linked list_t
 * @h: pointer to list_t
 *
 *
 * Return: num/elements
 */

size_t list_len(const list_t *h)

{
	unsigned int c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
