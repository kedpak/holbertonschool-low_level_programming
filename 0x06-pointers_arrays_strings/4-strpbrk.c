#include "holberton.h"

/**
 * _strpbrk - returns string after first matching character
 * @s: string to be matched
 * @accept: characters to be matched
 * Return: string or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				s = s + i;
				return (s);
			}
		}
	}
	return (0);
}
