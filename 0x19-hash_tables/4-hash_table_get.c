#include "hash_tables.h"

/**
 * hash_table_get - returns key value at index of table
 * @ht: pointer to hash table
 * @key: key to be searched for
 * Return: k_pair value on success
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *k_pair;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	k_pair = ht->array[index];

	if (k_pair == NULL || ht->array[index] == NULL)
	{
		return (NULL);
	}
	if (strcmp(strdup(key), k_pair->key) != 0)
	{
		return (NULL);
	}

	while (strcmp(key, k_pair->key) > 0)
	{
		k_pair = k_pair->next;
	}
	return (k_pair->value);
}
