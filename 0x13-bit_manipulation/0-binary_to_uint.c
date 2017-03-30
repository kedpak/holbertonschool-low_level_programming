#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - return length of string
 * @s: input string
 * Return: length of string in integers
 */
int _strlen(const char *s)
{
	int m;

	m = 0;
	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}

/**
 * binary_to_uint - turn binary into integer output
 * @b: input binary to be converted
 * Return: integer equivalent of binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, max, total;

	len = _strlen(b);
	total = 0;

	max = 1;

	for (i = 1; i < len; i++)
	{
		max *= 2;
	}
	for (i = 0; i < len ; i++)
	{
		if ((b[i] != '1' && b[i] != '0') || b == NULL)
		{
			return (0);
		}
		if (b[i] == '1')
		{
			total += max;
		}
		if (b[i] == '0')
		{
			;
		}
		max /= 2;
	}
	return (total);
}
