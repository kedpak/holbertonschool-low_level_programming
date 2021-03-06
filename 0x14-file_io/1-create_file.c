#include "holberton.h"

/**
 * _strlen - retrieve length of string
 * @s: input string
 * Return: integer of string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * create_file - creates a new file
 * @filename: name of the file to be created
 * @text_content: content of text inside of file
 * Return: 1 on success, 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, w, closer;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = _strlen(text_content);
		w = write(fd, text_content, len);
	}
	if (w == -1)
	{
		return (-1);
	}

	closer = close(fd);
	if (closer == -1)
	{
		return (-1);
	}
	return (1);
}
