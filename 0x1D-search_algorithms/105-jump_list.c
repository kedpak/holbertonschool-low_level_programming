#include "search_algos.h"

/**
 * jump_list - search for value inside of linked list using jump search
 * @list: head node of link list to traverse through
 * @size: size of the link list
 * @value: integer value to find inside of linked list
 * Return: returns pointer to the first node wher value is found
 * returns NULL on failure
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, i, flag;
	listint_t *temp;

	flag = 0;
	temp = list;
	jump = sqrt(size);
	if (list == NULL)
		return (NULL);
	while (list != NULL)
	{
		i = 0;
		if (value <= list->n)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       temp->index, list->index);
			break;
		}
		while (i < jump)
		{
			if (i == 0)
				temp = list;
			if (list->next == NULL)
			{
				printf("Value checked at index [%lu] = [%d]\n",
				       list->index, list->n);
				printf("Value found between indexes [%lu] and [%lu]\n",
				       temp->index, list->index);
				flag = 1;
				break;
			}
			list = list->next;
			i++;
		}
		if (flag == 1)
			break;
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
	}
	return (iter_list(temp, list, value));
}


/**
 * iter_list - iterates linked list starting from jump point
 * @temp: node to which start iteration to return node with value
 * @list: node at which to stop iteration
 * @value: value to search for inside of linked list
 * Return: returns node at which integer value is present
 */
listint_t *iter_list(listint_t *temp, listint_t *list, int value)
{
	while (temp != list->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", temp->index, temp->n);
		if (temp->n == value)
		{
			return (temp);
		}
		temp = temp->next;
	}
	return (NULL);
}
