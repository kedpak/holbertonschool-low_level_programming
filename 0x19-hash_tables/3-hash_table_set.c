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
	unsigned long int index, i;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL)
	{
		return (0);
	}

	index = key_index((unsigned const char*)key, ht->size);
	head = malloc(sizeof(hash_node_t *));
	new_node = malloc(sizeof(hash_node_t *));

	i = 0;
	while (i < ht->size)
	{
		if (head != NULL && head->key != NULL && strcmp(key, head->key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			return (1);
		}
		i++;
	}
	ht->array[index] = NULL;
	if (ht->array[index] != NULL)
	{
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = head;
	}
	else
	{
		ht->array[index] = head;
		head->key = strdup(key);
		head->value = strdup(value);
		head->next = NULL;
	}
	return (1);
}
