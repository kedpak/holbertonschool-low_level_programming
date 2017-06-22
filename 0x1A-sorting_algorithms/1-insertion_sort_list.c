#include "sort.h"

/**
 * insertion_sort_list - sorts linked list from lowest data int to largest
 * @list: list to sort
 * Return: void
 * list is traversed forward and trav in reverse if int is lower than prev int
 */
void insertion_sort_list(listint_t **list)
{

	listint_t *current, *temp, *temp2;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	current = *list;
	while (current != NULL)
	{
		while (current->prev != NULL && (current->prev)->n > current->n)
		{
			temp = current;
			temp2 = current->prev;
			temp2->next = temp->next;
			if (temp2->next != NULL)
			{
				temp2->next->prev = temp2;
			}
			temp->prev = temp2->prev;
			if (temp->prev != NULL)
			{
				temp->prev->next = temp;
			}
			else
			{
				*list = temp;
			}
			temp2->prev = temp;
			temp->next = temp2;
			print_list(*list);

			current = temp2->prev;
		}
		current = current->next;
	}
}
