#include "lists.h"

/**
 * delete_node_at_index - deletes a node
 * @head: list to print
 * @index: position on list
 *
 * Return: 1 if succeed, -1 if fall
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	unsigned int i = 0;
	listint_t *new;
	listint_t *temp;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		new = temp;
		*head = temp->next;
		free(new);
		return (1);
	}
	while (temp->next != NULL && i != index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);
	new = temp->next;
	temp->next = (temp->next)->next;
	free(new);
	return (1);
}
