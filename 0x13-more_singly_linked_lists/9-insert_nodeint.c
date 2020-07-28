#include "lists.h"

/**
 * insert_nodeint_at_index - print list
 * @idx: index of list
 * @n: position
 *
 * Return: new node address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	unsigned int i = 0;
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
		temp = *head;
	while (i != idx - 1)
	{
		if (temp->next != NULL)
		{
			temp = temp->next;
			i++;
		}
		else
			return (NULL);
	}

	new->next = temp->next;
	temp->next = new;
	return (new);
}
