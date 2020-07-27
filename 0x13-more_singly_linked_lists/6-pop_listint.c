#include "lists.h"

/**
 * pop_listint - Deletes the list head and returns its int value
 * @head: double pointer to list
 *
 *
 *
 * Return: value
 */

int pop_listint(listint_t **head)

{
	int i = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	i = temp->n;
	*head = temp->next;
	temp->next = NULL;
	free(temp);

	return (i);
}
