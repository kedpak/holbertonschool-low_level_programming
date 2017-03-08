#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free grid
 * @grid: grid
 * @height: height
 * Return: return void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
