#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at nth position
 * @head: head node
 * @idx: index of node
 * @n: data of node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new_node;
	unsigned int i;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	temp = *head;
	new_node->n = n;
	new_node->next = NULL;
	i = 0;

/*	if (head == NULL || *head == NULL)
	{
		return (NULL);
		} */
	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
		{
			temp = temp->next;
		}
		i++;
	}
	return (NULL);
}
