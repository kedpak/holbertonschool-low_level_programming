#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: integer difference of string
 */
int _strcmp(char *s1, char *s2)
{
	int num, i;
	
	i = 0;
	while (s1[i] != '\0')
	{ 
		if (*s1 < *s2)
		{
			num = *s1 - *s2;
		}
		else if (*s1 > *s2)
		{
			num = *s1 - *s2;
		}
		else
		{
			num = 0;
		}
		i++;
	}
	return (num);
}
