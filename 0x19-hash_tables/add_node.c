#include "hash_tables.h"

/**
 * _add_node - add node at beginning of list
 * @head: head node
 * @key: key value to be passed into node
 * @value: value of key
 * Return: new node
 */
hash_node_t *_add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));

	if (head == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = *head;
	if (head != NULL)
	{
		*head = new_node;
	}
	return (new_node);
}
