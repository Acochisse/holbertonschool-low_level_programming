#include "hash_tables.h"

/**
 * hash_table_print - prints the formatted hash table
 * @ht: hash table to print
 *
 *
 *
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)

{
	hash_node_t *new;
	unsigned long int index = 0;
	char *flag = "";

	if (ht == NULL)
		return;
	printf("{");
	while (index < ht->size)
	{
		new = ht->array[index];
		while (new != NULL)
		{
			printf("%s", flag);
			printf("'%s': '%s'", new->key, new->value);
			flag = ", ";
			new = new->next;

		}
		index++;
	}
	printf("}\n");
}
