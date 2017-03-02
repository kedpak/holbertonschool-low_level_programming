#include "holberton.h"

/**
 * is_palindrome - checks if string is palindrome
 * @s: string input
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (check(s, s[0], s[length(s) - 1]) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * check - checks characters that match
 * @string: string input
 * @start: start of string
 * @end: end of string
 * Return: result
 */
int check(char *string, int start, int end)
{
	if (start == end && length(string) / 2 > start)
	{
		return (check(string, start + 1, end - 1));
	}
	else if (start != end)
	{
		return (0);
	}
	else if (string[start] == string[end] && length(string) / 2 < start)
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
