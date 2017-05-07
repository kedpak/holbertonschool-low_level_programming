#include "lists.h"

/**
 * sum_dlistint - returns sum of int data
 * @head: head node
 * Return: sum of data inside node
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int i;
	dlistint_t *temp;

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
