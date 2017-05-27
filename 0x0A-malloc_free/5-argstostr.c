#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatanates string arguments
 * @ac: size of input
 * @av: size of entire pointer
 * Return: s
 */
char *argstostr(int ac, char **av)
{
	unsigned int bytes;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	bytes = total_len(ac, av);
	s = malloc(bytes);
	if (s == NULL)
	{
		return (NULL);
	}
	copy_strings(av, s);
	return (s);
}

/**
 * total_len - find length of all arguments combined
 * @ac: size of input
 * @av: size of entire pointer
 * Return: n
 */
unsigned int total_len(int ac, char **av)
{
	int i;
	unsigned int n, p;

	i = 0;
	p = 0;
	while (av[i] != NULL)
	{
		p += _strlen(av[i]);
		i++;
	}
	n = ac + 1 + p;
	n = n * sizeof(char);
	return (n);
}

/**
 * _strlen - find length of string
 * @s: input string
 * Return: string length
 */
unsigned int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * copy_strings - copy the stings
 * @av: pointer to entire array
 * @s: character
 * Return: copied string
 */
void copy_strings(char **av, char *s)
{
	int i, k;

	k = 0;
	i = 0;
	while (av[i] != NULL)
	{
		copy_str(av[i], s + k);
		k = k + _strlen(av[i]);
		s[k] = '\n';
		k++;
		i++;
	}
	s[k] = '\0';
}

/**
 * copy_str - copy string
 * @f: string to be copied from
 * @t: string to copy
 * Return: string
 */
void copy_str(char *f, char *t)
{
	int i;

	i = 0;
	while (f[i] != '\0')
	{
		t[i] = f[i];
		i++;
	}
}
