#include "lists.h"

/**
 * pop_listint - remove first node fromt list
 * @head: head node
 * Return: data of node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = temp->next;
	free(temp);
	return (temp->n);

}
