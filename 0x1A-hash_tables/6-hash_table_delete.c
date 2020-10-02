#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes hash table
 * @ht: target hash
 *
 *
 * Return: no return
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *new, *temp;
	unsigned int index = 0;

	new = ht->array[index];

	temp = new;

	if (ht == NULL)
		return;

	while (index < ht->size)
	{
		new = ht->array[index];
		while (new != NULL)
		{
			temp = new->next;
			free(new->key);
			free(new->value);
			free(new);
			new = temp;
		}
       	index++;
	}
	free(ht->array);
	free(ht);
}
