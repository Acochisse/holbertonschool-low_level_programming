#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end
 * @head: double pointer to the head
 * @h:
 *
 * Return: address of new element or NULL on fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
	dlistint_t *new, *tmp;

	tmp = *head;
	new = malloc(sizeof(dlistint_t));
	if (head == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (tmp->next != NULL)
		tmp->prev = NULL;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
