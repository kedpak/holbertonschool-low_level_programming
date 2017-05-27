#include "lists.h"

/**
 * sum_listint - add sum of data for all nodes
 * @head: head node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	unsigned int i;
	listint_t *temp;

	i = 0;
	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	while (temp != NULL)
	{
		i += temp->n;
		temp = temp->next;
	}
	return (i);
}
