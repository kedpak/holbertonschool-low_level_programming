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

	for (i = 0; *s ; i++)
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
		}
	}
	return (s);
}
