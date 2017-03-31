#include "holberton.h"

/**
 * flip_bits - find number of times bits flipped
 * @n: number to convert
 * @m: numbert to be converted to
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	int k, size;

	k = 0;
	i = 0;
	size = (sizeof(n) * 8) - 1;

	while (k <= size)
	{
		if ((n & 1) != (m & 1))
		{
			i++;
		}
		n = n >> 1;
		m = m >> 1;
		k++;
	}
	return (i);
}
