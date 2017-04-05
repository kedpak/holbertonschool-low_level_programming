#include "holberton.h"

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
	int fd, len, w;
	char *buf;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	len = _strlen(text_content);
	buf = malloc(sizeof(char) * len);
	if (text_content == NULL)
	{
		free(buf);
		close(fd);
		return (1);
	}

	w = write(fd, text_content, len);
	if (w == -1)
	{
		free(buf);
		return (-1);
	}
	free(buf);
	return (1);
}
