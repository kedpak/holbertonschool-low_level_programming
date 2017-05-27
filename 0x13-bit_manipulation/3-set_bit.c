#include "holberton.h"

/**
 * set_bit - set bit at index to 1
 * @n: input integer
 * @index: index of binary string
 * Return: 1 if success, 0 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8) - 1)
	{
		return (-1);
	}
	if ((*n >> index) | 1)
	{
		*n |= 1 << index;
		return (1);
	}
	return (-1);
}
