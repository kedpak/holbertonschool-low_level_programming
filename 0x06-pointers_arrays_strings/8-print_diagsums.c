#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of arrays diagonal
 * @a: array pointer
 * @size: size of array
 * Return: sum
 */
void print_diagsums(int *a, int size)
{
	int i, sum, sum2, n;

	n = 0;
	sum = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum = sum + (a[(size * n) + i]);
		sum2 = sum2 + (a[((size - 1) * (n + 1))]);
		n++;
	}
	printf("%d, %d", sum, sum2);
	putchar('\n');
}
