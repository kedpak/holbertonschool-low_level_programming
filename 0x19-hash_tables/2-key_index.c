#include "hash_tables.h"

/**
 * key_index - returns the index of key inside hash table
 * @key: input key
 * @size: size of array of hash table
 * Return: index for key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		return (hash_djb2(key) % size);
	}
	return (1);
}
