#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create array of integers
 * @min: minimum number input
 * @max: max number input
 * Return: array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	array = malloc(sizeof(int) * (min + max + 1));
	if (min > max || array == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
