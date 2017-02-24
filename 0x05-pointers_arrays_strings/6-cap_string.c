#include "holberton.h"

/**
 * cap_string - capitilize all words in string
 * @str: string
 * Return: string
 */
char *cap_string(char *str)
{
	int i, j;
	char n[13] = {' ', '\n', '\t', ',', ';', '.', '!',
'?', '"', '(', ')', '{', '}'};
	char *hey;

	hey = n;
	i = 1;
	j = 0;
	while (str[i] != '\0')
	{
		while (j < 13)
		{
			if (*((str + i) - 1) == hey[j] && *(str + i) >= 97 && *(str + i) <= 122)
			{
				*(str + i) = *(str + i) - 32;
			}
			else if (str[i] == 0)
			{
				*(str + i) = *(str + i) - 32;
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (str);
}
