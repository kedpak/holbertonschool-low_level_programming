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
 * append_text_to_file - append text to end of file
 * @filename: name of file
 * @text_content: content of text to be appended
 * Return: 1 on success, 0 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, w;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content != NULL)
	{
		len = _strlen(text_content);
		w = write(fd, text_content, len);
	}
	if (w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
