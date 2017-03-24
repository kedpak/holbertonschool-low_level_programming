#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints out all elements of list_t
 * @h: pointer to head node
 * Return: amount of elements
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (1);
	}

	while (h != NULL)
	{
		i++;
		printf("[%d]", h->len);
		printf("%s\n", h->str);
		h = h->next;
	}

	return (i);
}
