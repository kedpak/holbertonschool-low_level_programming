#include "lists.h"

/**
 * add_nodeint - add node to beginning of the list
 * @head: head node
 * @n: integer field
 * Return: address of new node or NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = *head;

	if (head != NULL)
	{
		*head = new_node;
		return (new_node);
	}
	return (NULL);
}
