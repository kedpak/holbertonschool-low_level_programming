#include "holberton.h"

/**
 * clear_bit - set bit at index to 0
 * @n: input number
 * @index: index of binary string
 * Return: 1 if success, -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (*n >> (index - 1))
	{
		*n ^= (0 ^ *n) & (1 << index);
		return (1);
	}
	return (-1);
}
