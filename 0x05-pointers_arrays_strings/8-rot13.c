#include "holberton.h"

/**
 * rot13 - switches strings with rot13
 * @s: input characters
 * Return: s
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
		{
			s[i] += 13;
		}
		else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
		{
			s[i] -= 13;
		}
	}
	return (s);
}
