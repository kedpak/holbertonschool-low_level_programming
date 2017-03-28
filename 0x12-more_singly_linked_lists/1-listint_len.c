#include "lists.h"

/**
 * listint_len - return amount of elements in node
 * @h: head node
 * Return: number of elements inside node
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
