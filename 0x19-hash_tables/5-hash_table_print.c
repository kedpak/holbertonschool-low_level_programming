#include "hash_tables.h"

/**
 *  hash_table_print - print a hash table
 *  @ht: hash table to print
 *  Return: void function returns nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, counter;
	hash_node_t *node;

	i = 0;
	counter = 0;
	if (ht == NULL)
		return;
	/*loop checks which last index has key pair value */
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			counter = i;
		}
		i++;
	}
	i = 0; /* set i back to zero for print loop */
	printf("{");
	while (i < ht->size)
	{
		/* set node to index of array hash table */
		node = ht->array[i];
		/* print key values */
		while (node != NULL)
		{
			if (ht->array[i] != NULL && i != counter)
			{
				printf("'%s': '%s', ", node->key, node->value);
			}
		/* if index is last index with a key value print this */
			if (ht->array[i] != NULL && i == counter)
			{
			printf("'%s': '%s'}", node->key, node->value);
			}
			node = node->next;
		}
		i++;
	}
	putchar('\n');
}
