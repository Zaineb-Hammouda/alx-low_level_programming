#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - prints a hash table
 * @ht: the table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0, n = 0;

	if (ht == NULL)
	{
		printf("{}\n");
		exit(EXIT_SUCCESS);
	}
	printf("{");
	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node)
			{
				if (n)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				n++;
			}
		}
	}
	printf("}\n");
}
