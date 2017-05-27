#include "holberton.h"

/**
 * _strcpy - copies string array into another array
 * @dest: destination array
 * @src: sourc array
 * Return: destination array
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
	_putchar('\n');
}
