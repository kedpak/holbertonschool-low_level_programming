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
	hash_node_t *temp, *new_node;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL)
	{
		return (0);
	}

	index = key_index((unsigned const char*)key, ht->size);

	ht->array[index] = NULL;
	temp = ht->array[index];
	new_node = ht->array[index];
	if (ht->array[index] != NULL)
	{
		while (temp != NULL)
		{
			if (temp && temp->key != NULL && strcmp(key, strdup(temp->key)) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
		}
		/* this is where all the value sets go */
		new_node = set_values(key, value);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		if (new_node->key == NULL || new_node->value == NULL)
		{
			free(new_node);
			return (0);
		}
	}
	else
	{
		new_node = set_values(key, value);
		ht->array[index] = new_node;
	}
	return (1);
}


/**
 * set_values - sets the key and values of the node
 * @key: key to be placed into node
 * @value: value of key
 * Return: returns the new node
 */
hash_node_t *set_values(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t *));
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
