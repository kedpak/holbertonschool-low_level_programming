#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - return length of string
 * @s: input string
 * Return: return string length
 */
int _strlen(const char *s)
{
	int m;

	m = 0;
	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}
/**
 * add_node_end - add a new node at end of the list_t
 * @head: addresss of head
 * @str: input data
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{

	const char *temp = str;

	struct list_s *new_node = (list_t *)malloc(sizeof(struct list_s));
	struct list_s *head_node = (list_t *)malloc(sizeof(struct list_s));

	head_node = *head;
	new_node->str = strdup(temp);
	new_node->len = _strlen(temp);
	new_node->next = NULL;


	if (*head == NULL)
	{
		*head = new_node;

	}
	else
	{
		while (head_node->next != NULL)
		{
			head_node = head_node->next;
		}
		head_node->next = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	return (NULL);
}
