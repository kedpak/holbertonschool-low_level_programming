#include "holberton.h"

/**
 * print_triangle - prints triangle based on argument number
 * @size: argument for size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k, n;

	n = 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - n; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < size - size + n ; k++)
		{
			_putchar('#');
		}
		j = 0;
		k = 0;
		n++;
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
