#include "lists.h"

/**
 * add_node_end - adds a node to the end of list_t
 * @head: double pointer to list_t
 * @str: string
 *
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)

{
	int c = 0;
	list_t *end_node, *cursor;
	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
		return (NULL);

	else if (str)
	{
		end_node->str = strdup(str);
		while (str[c] != '\0')
			c++;
		end_node->len = c;
	}

	else
	{
		end_node->str = NULL;
		end_node->len = 0;
	}

	end_node->next = NULL;

	if (*head)
	{
		cursor = *head;
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = end_node;
	}
	else
	*head = end_node;

	return (end_node);
}
