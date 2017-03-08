#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatanate two strings and allocate into new memory
 * @s1: destination string
 * @s2: string to be appended
 * Return: string concatnated
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, slen, s2len;
	char *m;

	i = 0; k = 0; j = 0;
	slen = _strlen(s1);
	s2len = _strlen(s2);
	if (s1 == NULL)
	{
		slen = 0;
	}
	if (s2 == NULL)
	{
		s2len = 0;
	}
	m = malloc(sizeof(char) * (slen + s2len + 1));
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	if (slen != 0)
	{
		while (s1[i] != '\0')
		{
			m[k] = s1[i];
			i++;
			k++;
		}
	}
	if (s2len != 0)
	{
		while (s2[j] != '\0')
		{
			m[k] = s2[j];
			j++;
			k++;
		}
	}
	m[k] = '\0';
	return (m);
}

/**
 * _strlen - find length of string
 * @s: input string
 * Return: string length
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
