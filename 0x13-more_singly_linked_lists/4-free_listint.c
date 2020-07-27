#include "lists.h"

/**
 * free_listint - frees the current listint_t
 * @head: double pointer to list
 *
 *
 * Return: none
 *
 */

void free_listint(listint_t *head)

{
	listint_t *index = head;
	listint_t *end_node;
	while (index)
	{
		end_node = index->next;
		free(index);
  		index = end_node;
	}
}
