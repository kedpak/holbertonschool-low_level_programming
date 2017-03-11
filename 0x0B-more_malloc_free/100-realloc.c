#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocate memory from old block to new
 * @ptr: pointer to old allocated memory
 * @old_size: size of old allocation
 * @new_size: size of new allocation
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i;
	char *newcpy;
	char *ptrcpy;

	new = malloc(sizeof(char) * (old_size + new_size));
	if (new_size > old_size)
	{
		new_size = old_size;
	}
	if (new_size == old_size)
	{
		return (new);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(new);
		return (NULL);
	}
	newcpy = new;
	ptrcpy = new;
	for (i = 0; i < new_size; i++)
	{
		newcpy[i] = ptrcpy[i];
	}
	free(new);
	return (new);
}
