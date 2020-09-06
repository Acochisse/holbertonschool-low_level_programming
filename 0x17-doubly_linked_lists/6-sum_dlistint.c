#include "lists.h"

/**
 * sum_dlistint_t - adds all the values within linked list node data
 * @head: is head node pointer
 *
 * Return: sum of all values
 */

int sum_dlistint(dlistint_t *head)

{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
