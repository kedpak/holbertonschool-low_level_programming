#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free linked list
 * @head: head node
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->next);
		free(head);
		head = head->next;
	}
}
