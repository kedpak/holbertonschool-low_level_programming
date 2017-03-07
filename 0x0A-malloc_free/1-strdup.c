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

	m = malloc(sizeof(str));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		m[i] = str[i];
		i++;
	}
	if (m < str)
	{
		return (NULL);
	}
	return (m);
}
