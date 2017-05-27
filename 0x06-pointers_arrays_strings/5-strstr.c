#include "holberton.h"
#include <stdlib.h>
/**
 * _strstr - finds substring within string
 * @haystack: string to search in
 * @needle: string to search for
 * Return: Haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		for (i = 0; haystack[i] == needle[i] && haystack[i] != '\0'; i++)
		{
			;
		}
		if (needle[i] == '\0')
		{
			return (haystack);
		}

		haystack++;
	}
	return (NULL);
}


