#include "lists.h"

/**
 * print_listint - print list of integers in list
 * @h: head node
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
		
	}
	return (i);
}
