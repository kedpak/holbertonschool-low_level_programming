#include "holberton.h"

/**
 * is_palindrome - checks if string is palindrome
 * @s: string input
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (check(s, s[0], s[length(s) - 1]) == 1 || s == '\0')
	{
		return (0);
	}
	else
	{
		return (1);
	}
		return (0);
}

/**
 * check - checks characters that match
 * @string: string input
 * @start: start of string
 * @end: end of string
 * Return: result
 */
int check(char *string, char start, char end)
{
	if (string[start / 2] == string[end / 2])
	{
		return (check(string, start + 1, end - 1));
	}
	else if (string[(start / 2) + 1] == string[(end / 2) - 1])
	{
		return (1);
	}
	return (0);
}

/**
 * length - length of string
 * @c: character input
 * Return: length
 */
int length(char *c)
{
	if (*c == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + length(c + 1));
	}
}
