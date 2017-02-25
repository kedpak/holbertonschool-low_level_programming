#include "holberton.h"

/**
 * rot13 - switches strings with rot13
 * @s: input characters
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *hey;
	char *me;

	hey = a;
	me = b;
	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		while (j < 52)
		{
			if (*(s + i) == hey[j])
			{
				*(s + i) = me[j];
				break;
			}
			j++;
		}
		j = 0;
	}
	return (s);
}
