#include "lists.h"

/**
 * add_dnodeint - add node with int data type
 * @head: head node
 * @n: integer data type
 * Return: new node or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	const int temp = n;
	struct dlistint_s *new_node = (dlistint_t *)malloc(sizeof(struct dlistint_s));

	new_node->n = temp;
	new_node->next = *head;
	new_node->prev = NULL;
	if (head != NULL)
	{
		*head = new_node;
		return (new_node);
	}
	return (NULL);
}
