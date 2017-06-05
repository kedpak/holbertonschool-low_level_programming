#include "hash_tables.h"

/**
 * hash_table_set - adds element to index of hash table
 * @ht: pointer to hash table
 * @key: key to be placed
 * @value: value of key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *head, *new_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || ht->array == NULL)
	{
		free(ht);
		return (0);
	}

	index = key_index((unsigned const char*)key, ht->size);
	head = malloc(sizeof(hash_node_t *));


	if (ht->array[index] != NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		new_node->key = (char *)key;
		new_node->value = (char *)value;
		new_node->next = head;

		return (1);
	}
	ht->array[index] = head;
	head->key = (char *)key;
	head->value = (char *)value;
	head->next = NULL;

	return (1);
}
