#include "lists.h"

/**
 * add_node - adds a new node to list_t
 * @head: double pointer to list_t
 * @str: input string
 *
 * Return: address of new element, or NULL on fall
 */

list_t *add_node(list_t **head, const char *str)

{
	int c = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	while (str[c] != '\0')
		c++;

	temp->len = c;
	temp->next = *head;
	*head = temp;
	return (temp);
}
