#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string into a new memory allocation
 * @str: string input to be copied
 * Return: copied string
 */
char *_strdup(char *str)
{
	int i;
	char *m;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	m = malloc((sizeof(char) * _strlen(str)) + 1);
	if (m == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		m[i] = str[i];
		i++;
	}
	m[i] = '\0';
	return (m);
}

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
