#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - find length of string
 * @s: string input
 * Return: return length of string
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

/**
 * string_nconcat - concatante two strings up to n bytes for string 2
 * @s1: string 1
 * @s2: string 2
 * @n: amount of bytes for string 2
 * Return: concatanated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k, len1, len2;
	char *a;

	i = 0; k = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}
	a = malloc(sizeof(char) * (len1 + n + 1));
	for (; i <  len1; i++)
	{
		a[i] = s1[i];
	}
	for (; k < n; k++)
	{
		a[i + k] = s2[k];
	}
	return (a);
}
