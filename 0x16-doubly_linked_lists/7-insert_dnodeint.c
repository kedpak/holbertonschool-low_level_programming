#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at the given index
 * @h: head node
 * @idx: index position to place new node
 * @n: integer data of new node
 * Return: new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new_node;
	unsigned int i;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	temp = *h;
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	i = 0;

	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (*h);
	}
	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			new_node->prev = temp;
			temp->next = new_node;
			return (new_node);
		}
		else
		{
			temp->prev = temp;
			temp = temp->next;
		}
		i++;
	}
	return (NULL);

}
