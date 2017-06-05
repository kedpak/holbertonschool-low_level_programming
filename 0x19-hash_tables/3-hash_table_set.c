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
	hash_node_t *new_node;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL)
	{
		return (0);
	}

	index = key_index((unsigned const char*)key, ht->size);

	new_node = ht->array[index];
	ht->array[index] = NULL;
	if (ht->array[index] == NULL)
	{
		new_node = set_values(key, value);
		if (new_node == NULL)
		{
			return (0);
		}
		ht->array[index] = new_node;
	}
	else
	{
		new_node = set_values(key, value);
		if (new_node == NULL)
		{
			return (0);
		}
		new_node->next = new_node;
		ht->array[index] = new_node;

	}
	return (1);
}


/**
 * set_values - creates new node and sets the key and values of the node
 * @key: key to be placed into node
 * @value: value of key
 * Return: returns the new node
 */
hash_node_t *set_values(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		free(new_node->key);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node);
		free(new_node->value);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);

}
