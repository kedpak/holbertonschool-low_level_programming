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
	
	if (str == NULL)
	{
		return (NULL);
	}
	m = malloc(sizeof(*str));
	if (m == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		m[i] = str[i];
		i++;
	}
	return (m);
}
