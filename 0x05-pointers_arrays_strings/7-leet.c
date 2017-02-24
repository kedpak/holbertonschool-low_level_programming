#include "holberton.h"

/**
 * leet - replace some letters with numbers
 * @s: input string
 * Return: string
 */
char *leet(char *s)
{
	int i, j;
	char lower[5] = {'a', 'e', 'o', 't', 'l'};
	char numbers[5] = {'4', '3', '0', '7', '1'};	

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		while (j < 5)
		{
			if (*(s + i) == lower[j] || *(s + i) == lower[j] - 32)
			{
				*(s + i) = numbers[j];
			}
			j++;
		}
		j = 0;
	}
	return (s);
}
