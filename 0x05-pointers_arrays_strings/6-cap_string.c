#include "holberton.h"

/**
 * cap_string - capitilize all words in string
 * @str: string
 * Return: string
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (*(str + i) >= 97 && *(str + i) <= 122 &&
*((str + i) - 1) <= 47 && *((str + i) - 1) >= 0)
		{
			*(str + i) = *(str + i) - 32;

		}
		i++;
	}
	return (str);
}
