#include "holberton.h"

/**
 * _memcpy - copy src string into dest string for n's places
 * @dest: destination string, pointer to be copied into
 * @src: source string, string to be copied
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
