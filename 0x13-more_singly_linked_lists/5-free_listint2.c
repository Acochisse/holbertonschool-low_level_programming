#include "lists.h"

/**
 * free_listint2 - sets head to NULL
 * @head: pointer to list
 *
 *
 *
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *index;
	listint_t *end_node;

	if (head == NULL || *head == NULL)
		return;
	index = *head;
	while (index)
	{
		end_node = index->next;
		index->next = NULL;
		free(index);
		index = end_node;
	}
	*head = NULL;
}
