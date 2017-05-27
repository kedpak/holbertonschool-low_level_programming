#include "lists.h"

/**
 * pop_listint - remove first node fromt list
 * @head: head node
 * Return: data of node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	unsigned int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);

}
