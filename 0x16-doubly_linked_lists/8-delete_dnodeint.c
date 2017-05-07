#include "lists.h"

/**
 * delete_dnodeint_at_index - delets a node at specified index
 * @head: head node
 * @index: index at which node should be deleted
 * Return: 1 on success, -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2;
	unsigned int i;

	temp = *head;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	i = 0;
	while (i < index - 1)
	{
		if (temp->next == NULL)
		{
			return (-1);
		}
		temp = temp->next;
		i++;
	}
	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
	return (1);
}
