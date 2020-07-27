#include "lists.h"

/**
 * listint_len - prints the number of elements
 * @h: const int pointer
 *
 * Return: number of elements
 *
 */

size_t listint_len(const listint_t *h)

{
	unsigned int c = 0;

	while (h)
	{
		h = h->next;
		c += 1;
	}
	return (c);
}
