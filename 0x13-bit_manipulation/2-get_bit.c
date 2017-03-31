#include "holberton.h"

/**
 * get_bit - return byte at index
 * @n: input integer
 * @index: index of binary
 * Return: value of binary at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n >> (index - 1))
	{
		return (1);
	}
	else
	{

		return (0);
	}
	return (-1);
}
