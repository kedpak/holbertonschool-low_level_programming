#include "holberton.h"
#include <stdio.h>

/**
 * is_palindrome - checks if string is palindrome
 * @s: string input
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len = length(s);

	return (check(s, 0, len));
}

/**
 * check - checks characters that match
 * @string: string input
 * @start: start of string
 * @end: end of string
 * Return: result
 */
char check(char *string, int start, int end)
{
	if (start > end)
	{
		return (1);
	}
	if (string[start] != string[end - 1])
	{
		return (0);
	}
	return (check(string, start + 1, end - 1));
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
