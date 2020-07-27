#include "lists.h"

/**
 * add_nodeint - adds a new node int
 * @head: double pointer to linked list
 * @n: int within linked list
 *
 * Return:
 */
listint_t *add_nodeint(listint_t **head, const int n)

{

	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = (listint_t *) malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = (*head);
	*head = temp;

	return (*head);
}
