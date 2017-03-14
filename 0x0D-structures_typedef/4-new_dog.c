#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <unistd.h>

/**
 * new_dog - creates a new dog struct
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->name = malloc(sizeof(char) * _strlen(name));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	_strcpy(newdog->name, name);
	newdog->owner = malloc(sizeof(char) * _strlen(owner));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	_strcpy(newdog->owner, owner);
	newdog->age = age;
	return (newdog);
}

/**
 * _strlen - get length of string
 * @s: input string
 * Return: string length
 */
int _strlen(char *s)
{
	int m;

	m = 0;
	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}

/**
 * _strcpy - copy string from source to dest
 * @dest: destination string
 * @src: src string
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
	_putchar('\n');
}

/**
 * _putchar - print characters
 * @c: character input
 * Return: characters to pring
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
