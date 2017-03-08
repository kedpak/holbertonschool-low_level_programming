#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concast - concatanate two strings and allocate into new memory
 * @s1: destination string
 * @s2: string to be appended
 * Return: string concatnated
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *m;

	i = 0;
	j = 0;
	k = 0;
	m = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (s1 == NULL)
	{
		s1[0] = '\0';
	}
	if (s2 == NULL)
	{
		s2[0] = '\0';
	}
	while (s1[i] != '\0')
	{
		m[k] = s1[i];
		i++;
		k++;
	}
	while (s2[j] != '\0')
	{
		m[k] = s2[j];
		j++;
		k++;
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
