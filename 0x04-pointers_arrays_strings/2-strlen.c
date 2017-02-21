#include "holberton.h"

/**
 * _strlen - return length of string
 * @s: character input
 * Return: length of string
 */
int _strlen(char *s)
{
	int m;

	m = 0;
	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}
