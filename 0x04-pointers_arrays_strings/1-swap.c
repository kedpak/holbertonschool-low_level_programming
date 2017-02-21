#include "holberton.h"

/**
 * swap_int - swap integers
 * @a: first integer
 * @b : second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
