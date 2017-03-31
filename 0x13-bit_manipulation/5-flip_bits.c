#include "holberton.h"

/**
 * flip_bits - find number of times bits flipped
 * @n: number to convert
 * @m: numbert to be converted to
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, k, temp;

	k = 0;
	i = 0;
	temp = m;
	while (temp > 0)
	{
		if ((n >> k) ^ (m >> k))
		{
			i++;
		}
		temp = temp >> k;
		k++;
	}
	return (i);
}
