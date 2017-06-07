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
	unsigned long int index, i;

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
	i = 0;
	while (i < ht->size)
	{
		k_pair = ht->array[index];
		while (k_pair != NULL)
		{
			if (strcmp(key, k_pair->key) == 0)
			{
				return (k_pair->value);
			}
			k_pair = k_pair->next;
		}
		i++;
	}
	return (NULL);
}
