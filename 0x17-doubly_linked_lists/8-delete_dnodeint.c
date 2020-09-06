#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes at that position index
 * @head: double pointer to the head
 * @index: index position to be deleted
 *
 * Return: 1 if success, -1 on fail
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
	unsigned int i;
	dlistint_t *tmp;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	for (i = 0; i < index && tmp != NULL; i++)
		tmp = tmp->next;

	if (index - i == 0 && tmp != NULL)
	{
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
		if (tmp->prev != NULL)
			tmp->prev->next = tmp->next;
		if (tmp == *head)
			*head = tmp-next;
		free(tmp);
		return (1);
	}
	return (-1);
}
