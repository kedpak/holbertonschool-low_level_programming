#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the number of elements in linked list_t list
 * @h: pointer to the head node
 * Return: number of elments
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (1);
	}

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
