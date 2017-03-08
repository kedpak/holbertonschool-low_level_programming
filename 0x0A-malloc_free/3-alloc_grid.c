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

	m = malloc(sizeof(int *) * width + height);
	if (m == NULL || width <= 0 || height <= 0)
	{
		free(m);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		m[i] = malloc(sizeof(int) * width);
		if (m[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(m);
			}
		}
		for (j = 0; j < width; j++)
		{
			m[i][j] = 0;
		}
	}

	return (m);
}
