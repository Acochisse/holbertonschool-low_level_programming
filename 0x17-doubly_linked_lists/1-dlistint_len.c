#include "lists.h"

/**
 * dlistint_len - determines the number of elements in dbly linked list
 * @h: pointer to head node
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)

{
	size_t ret_val = 0;

	while (h != NULL)
	{
		h = h->next;
		ret_val++;
	}
	return (ret_val);
}
