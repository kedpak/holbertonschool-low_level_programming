#include "lists.h"

/**
 * get_nodeint_at_index - obtain node at nth position
 * @head: head node
 * @index: index of node to be returned
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;


	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		if (i == index)
		{
			return (temp);
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}
