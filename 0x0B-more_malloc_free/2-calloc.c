#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: memory set
 * @size: size of memory to allocate
 * Return: Array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;
	unsigned int i;

	array = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	while (i < nmemb)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
