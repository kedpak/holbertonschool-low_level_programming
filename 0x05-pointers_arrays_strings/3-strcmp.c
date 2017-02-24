#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: integer difference of string
 */
int _strcmp(char *s1, char *s2)
{
	int num, i, j;
	
	i = 0;
	j = 0;
	while (s1[i] != '\0' || s2[j] != '\0')
	{ 
		if (*(s1 + i) == *(s2 + j))
		{
			num = 0;
		}
		else if (*(s1 + i) > *(s2 + j))
		{
			num = *s1 - *s2;
			break;
		}
		else if (*(s1 + i) < *(s2 + j))
		{
			num = *s1 - *s2;
			break;
		}
		i++;
		j++;
	}
	return (num);
}
