#include "holberton.h"

/**
 * get_endianness - check endian machine type
 * Return: 1 if little endian, 0 if big
 */
int get_endianness(void)
{
	unsigned int i;
	char *k;

	i = 1;
	k = (char *) &i;
	if (*k)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
