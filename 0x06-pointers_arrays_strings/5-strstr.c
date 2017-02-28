#include "holberton.h"

/**
 * _strstr - finds substring within string
 * @haystack: string to search in
 * @needle: string to search for
 * Return: Haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, n;

	i = 0;
	j = 0;
	n = 0;
	while (needle[i] != '\0')
	{
		while (haystack[j] != '\0')
		{
			if (haystack[j] == needle[i])
			{
				while (haystack[j] + n == needle[i] + n && haystack[j] != '\0')
				{
					haystack = needle + n;
					n++;
				}
				return (haystack);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (haystack);
}
