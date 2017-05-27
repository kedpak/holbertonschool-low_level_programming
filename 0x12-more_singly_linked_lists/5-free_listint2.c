#include "lists.h"

/**
 * free_listint2 - free nodes and set head to NULL
 * @head: head node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;


	while (head != NULL && *head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	head = NULL;

}
