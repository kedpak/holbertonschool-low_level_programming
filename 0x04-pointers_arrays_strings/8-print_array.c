#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print elements of array based on n
 * @a: pointer to first element of array
 * @n: argument how many elements to itereate
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else if (i < n)
		{
			printf("%d", a[i]);
		}
	}
	putchar('\n');
}
