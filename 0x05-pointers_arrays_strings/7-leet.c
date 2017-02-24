#include "holberton.h"

/**
 * *leet - replace some letters with numbers
 * @s: input string
 * Return: string
 */
char *leet(char *s)
{
	int i, j;
	char lower[5] = {'a', 'e', 'o', 't', 'l'};
	char upper[5] = {'4', '3', '0', '7', '1'};
	char *u;
	char *l;

	u = upper;
	l = lower;
	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		while (j < 5)
		{
			if (*(s + i) == l[j] || *(s + i) == l[j] - 32)
			{
				*(s + i) = u[j];
			}
			j++;
		}
		j = 0;
	}
	return (s);
}
