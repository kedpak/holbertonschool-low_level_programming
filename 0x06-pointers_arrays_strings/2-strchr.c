#include "holberton.h"

/**
 * _strchr - find character inside string
 * @s: string to find character
 * @c: character to find
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (s + i);
}
