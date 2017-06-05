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

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL)
	{
		return (0);
	}

	index = key_index((unsigned const char*)key, ht->size);
	head = malloc(sizeof(hash_node_t *));
	new_node = malloc(sizeof(hash_node_t *));

	if (ht->array[index] != NULL && strcmp(key, new_node->key) == 0)
	{
		free (new_node->value);
		new_node->value = strdup(value);
	} 
	if (ht->array[index] != NULL)
	{
		new_node->key = (char *)key;
		new_node->value = (char *)value;
		new_node->next = head;
	}
	else
	{
		ht->array[index] = head;
		head->key = (char *)key;
		head->value = (char *)value;
		head->next = NULL;
	}

	return (1);
}
