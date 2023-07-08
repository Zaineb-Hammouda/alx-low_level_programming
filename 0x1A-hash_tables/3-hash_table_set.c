#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key to store
 * @value: the value
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;
	hash_node_t *node;

	if (key == NULL || ht == NULL)
		return (0);
	hash = key_index((const unsigned char *)key, ht->size);
	node = ht->array[hash];
	if (node == NULL)
	{
		node->key = (char *)key;
		node->value = (char *)value;
		return (1);
	}
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			if (strcmp(node->value, value) == 0)
				return (1);
			strcpy(node->value, value);
			return (1);
		}
		node = node->next;
	}
	if (node == NULL)
	{
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (0);
		node->key = malloc(strlen(key) + 1);
		if (node->key == NULL)
			return (0);
		node->value = malloc(strlen(value) + 1);
		if (node->value == NULL)
			return (0);
		strcpy(node->key, key);
		strcpy(node->value, value);
		node->next = ht->array[hash];
		ht->array[hash] = node;
		return (1);
	}
	return (0);
}
