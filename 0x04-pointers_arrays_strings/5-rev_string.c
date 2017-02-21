#include "holberton.h"

/**
 * rev_string - reverses string
 * @s: input string
 * Return: void
 */
void rev_string(char *s)
{
	int n, k, length, string;

	length = 0;
	n = 0;
	k = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	for (n = 0, k = length - 1; n < length / 2; n++, k--)
	{
		string = s[k];
		s[k] = s[n];
		s[n] = string;
	}
}
