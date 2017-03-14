#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

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
	unsigned int i, j;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->name = malloc(sizeof(char) * strlen(name) + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	i = 0;
	while (newdog->name[i] != '\0')
	{
		newdog->name[i] = name[i];
		i++;
	}
	newdog->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	j = 0;
	while (owner[j] != '\0')
	{
		newdog->owner[j] = owner[j];
		j++;
	}
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
