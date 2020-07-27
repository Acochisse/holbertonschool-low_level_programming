#include "lists.h"

/**
 * print_listint - prints number of elements in a linked list
 * @h: const pointer
 *
 *
 * Return: number of nodes
 *
 */

size_t print_listint(const listint_t *h)

{
	int c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c += 1;
		h = h->next;
	}
	return (c);
}
