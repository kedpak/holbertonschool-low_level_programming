#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - initialize array using malloc
 * @size: size of array
 * @c: characters of array
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	i = 0;
	array = malloc(sizeof(c) * size);
	if (array == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
