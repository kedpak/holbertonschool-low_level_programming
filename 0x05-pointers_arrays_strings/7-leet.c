#include "holberton.h"

/**
 * leet - replace some letters with numbers
 * @s: input string
 * Return: string
 */
char *leet(char *s)
{
	int i, j;
	char lower[] = "aeotl";
	char numbers[] = "43071";

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
