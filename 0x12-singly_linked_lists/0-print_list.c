#include "lists.h"

/**
* print_list - prints all of the elements of list_t
* @h: const pointer type
*
* return: number of nodes, or nil if str = NULL
*
*/

size_t print_list(const list_t *h)

{
	unsigned int c = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		c++;
	}
	return (c);
}
