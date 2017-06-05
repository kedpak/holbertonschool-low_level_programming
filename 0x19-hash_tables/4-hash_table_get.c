#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *k_pair;
	unsigned long int index;

	index = key_index((unsigned const char*)key, ht->size);
	k_pair = ht->array[index];

	if (k_pair == NULL || k_pair->value == NULL)
	{
		return (NULL);
	}

	while (strcmp(strdup(key), k_pair->key) > 0)
	{
		k_pair = k_pair->next;
	}
	if (strcmp(strdup(key), k_pair->key) != 0)
	{
		return (NULL);
	}
	else
	{
		return (k_pair->value);
	}

}
