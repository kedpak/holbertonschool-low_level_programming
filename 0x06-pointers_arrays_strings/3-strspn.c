#include "holberton.h"

/**
 * _strspn - checks number of initial matching chars from accept to s
 * @s: string to be checked for matching chars
 * @accept: string that contains chars that need to be matched
 * Return: string length where characters seizes to match
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, n, j, temp;

	n = 0;
	temp = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				n++;
			}
		}
		if (n <= temp && temp != 0)
		{
			break;
		}
		j = 0;
		temp = n; /* temp checks if n iterated inside nested loop, if no,*/
/*then ends program */
	}
	return (n);
}
