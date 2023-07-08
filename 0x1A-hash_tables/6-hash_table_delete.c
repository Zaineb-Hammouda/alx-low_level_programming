#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash_table
 * @ht: the table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			node = ht->array[i];
			free(node->key);
			free(node->value);
			free(node);
			ht->array[i] = ht->array[i]->next;
		}
	}
	free(ht->array);
	free(ht);
}
