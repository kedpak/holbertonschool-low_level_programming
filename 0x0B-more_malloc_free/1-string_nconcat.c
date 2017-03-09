#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatante two strings up to n bytes for string 2
 * @s1: string 1
 * @s2: string 2
 * @n: amount of bytes for string 2
 * Return: concatanated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	unsigned int len;
	char *a;

	a = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	i = 0;
	j = 0;
	k = 0;
	len = _strlen(s2);
	if (a == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		a[k] = s1[i];
		i++;
		k++;
	}
	if (n < len)
	{
		while (j < n)
		{
			a[k] = s2[j];
			j++;
			k++;
		}
	}
	else
	{
		while (s2[j] != '\0')
		{
			a[k] = s1[i];
			i++;
			k++;
		}
	}
	a[k] = '\0';
	return (a);
}

/**
 * _strlen - return length of string
 * @s: string input
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	int m;

	m = 0;
	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}
