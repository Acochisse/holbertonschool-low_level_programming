#include "hash_tables.h"

/**
 * hash_table_create - initialises a new hash table
 * @size: number of slots to be in the new hash table
 *
 *
 *
 * Return: pointer to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)

{
	hash_table_t *new;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));

	if (!new)
		return (NULL);

	new->size = size;
	new->array = calloc(size, sizeof(hash_node_t *));

	if (new->array == NULL)
		return (NULL);

	return (new);
}
