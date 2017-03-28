#include "lists.h"

/**
 * free_listint2 - free nodes and set head to NULL
 * @head: head node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *temp2;

	temp = *head;
	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
	*head = NULL;
}
