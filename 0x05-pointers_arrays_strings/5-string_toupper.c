#include "holberton.h"

/**
 * *string_touppe - converts lower case into upper case
 * @str: string
 * Return: string in uppercase
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
		{
			*(str + i) = *(str + i) - 32;
		}
		i++;
	}
	return (str);
}
