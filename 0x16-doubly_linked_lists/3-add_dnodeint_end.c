#include "lists.h"

/**
 * add_dnodeint_end - add node at end of list
 * @head: head node
 * @n: integer data type
 * Return: new node or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	const int temp = n;
	dlistint_t *new_node;
	dlistint_t *head_node;

	head_node = *head;
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = temp;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (head_node->next != NULL)
		{
			head_node->prev = head_node;
			head_node = head_node->next;
		}
		head_node->next = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	return (NULL);
}
