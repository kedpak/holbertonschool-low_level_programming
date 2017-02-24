#include "holberton.h"

/**
 * reverse_array - reverse array of integers
 * @a: pointer to array
 * @n: number of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, k, string;

	for (i = 0, k = n - 1; i <= k / 2; i++, k--)
	{
		string = a[k];
		a[k] = a[i];
		a[i] = string;
	}
}
