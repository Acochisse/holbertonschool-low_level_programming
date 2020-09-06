#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at position index
 * @h: double pointer to head
 * @idx: index position
 * @n: new node data val
 *
 * return: address of new node, or NULL on fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int index = 0;

	new = malloc(sizeof(dlistint_t));
	if (h == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		*h->prev = new;
		*h = new;
		return (new);
	}
	else
		tmp = *h;
	while (index != idx - 1)
	{
		if (tmp->next != NULL)
		{
			tmp = tmp->next;
			index++;
		}
		else
			return (NULL);
	}

	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
