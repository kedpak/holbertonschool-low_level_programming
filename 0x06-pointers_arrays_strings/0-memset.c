#include "holberton.h"

/**
 * _memset - set memmory of b into s for n number of times
 * @s: pointer to string
 * @b: characters to be set
 * @n: number to be set
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

