#include "holberton.h"

/**
 * rot13 - switches strings with rot13
 * @ch: input characters
 * Return: ch
 */
char *rot13(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if ((ch[i] >= 'A' && ch[i] <= 'M') || (ch[i] >= 'a' && ch[i] <= 'm'))
		{
			ch[i] += 13;
		}
		else if ((ch[i] >= 'N' && ch[i] <= 'Z') || (ch[i] >= 'n' && ch[i] <= 'z'))
		{
			ch[i] -= 13;
		}
	}
	return (ch);
}
