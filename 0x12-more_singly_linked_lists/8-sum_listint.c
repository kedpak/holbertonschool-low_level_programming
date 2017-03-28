#include "lists.h"

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
