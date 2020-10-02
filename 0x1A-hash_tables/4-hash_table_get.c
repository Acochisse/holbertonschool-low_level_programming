#include "hash_tables.h"

/**
 * hash_table_get - returns the value of an associated key from a hash table
 * @ht: target hash table
 * @key: Desired key value
 *
 *
 * Return: value of key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)

{
	hash_node_t *new;
	int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	new = ht->array[index];
	while (new != NULL)
	{
		if (strcmp(new->key, key) == 0)
			return (new->value);
		new = new->next;
	}
	return (NULL);
}
