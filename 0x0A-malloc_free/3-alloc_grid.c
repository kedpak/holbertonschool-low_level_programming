#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocating to multidimensional array
 * @width: width of array
 * @height: height of array
 * Return: elements of array or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **m;

	m = malloc(sizeof(int) * 1);
	if (m == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		m[i] = malloc(sizeof(int) * 1);
		for (j = 0; j < width; j++)
		{
			m[i][j] = 0;
		}
	}
	return (m);
	free(m);
}
