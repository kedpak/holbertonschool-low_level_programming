#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at nth index
 * @head: head node
 * @index: index of node
 * Return: 1 for success 0 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
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
