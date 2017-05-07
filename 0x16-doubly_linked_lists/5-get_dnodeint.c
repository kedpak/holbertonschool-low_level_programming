#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at specified index and returns data
 * @head: head node
 * @index: index number of specified node
 * Return: temp head node or NULL if failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	i = 0;
	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		else
		{
			i++;
		}
		temp = temp->next;
	}
	return (NULL);
}
