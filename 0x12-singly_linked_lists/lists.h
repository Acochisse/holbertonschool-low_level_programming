#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_sub - singly linked list
 * @str: string
 * @len: length of string
 * @next: refer address to next node
 */

typedef struct list_t {
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif