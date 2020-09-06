#include "lists.h"

/**
 * free_dlistint - frees doubly linked list
 * @head pointer to head of list
 *
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)

{
	dlistint_t *tmp, *buf;

	tmp = head;
	while (tmp)
	{
		buf = tmp->next;
		free(tmp);
		tmp = buf;
	}
}
