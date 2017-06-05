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
		return (0);
	if (value == 0 || strlen(key) == 0)
		return (0);
	/* grabs index of array to implement element */
	index = key_index((unsigned const char*)key, ht->size);
	ht->array[index] = NULL;
	/* beginning of linked list at specified index */
	if (ht->array[index] == NULL)
	{
		new_node = set_values(key, value);  /* malloc space for new node */
		if (new_node == NULL)
			return (0);
		ht->array[index] = new_node;
	}
	/* if collision occurs this else statement will execute */
	else
	{
		/* sets up new_node at beginning of list */
		new_node = set_values(key, value);
		if (new_node == NULL)
			return (0);
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
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->key = strdup(key);
	/* if key of new node is NULL, then free hte new node */
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	/* if value is NULL, then free all previous malloced values */
	if (new_node->value == NULL)
	{
		free(new_node);
		free(new_node->key);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);

}
