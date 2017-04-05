#include "holberton.h"

/**
 * read_textfile - reads textfile and prints content
 * @filename: name of file to retrieve content
 * @letters: number of characters to be printed
 * Return: number of written characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, written, r, closer;
	char *buf;

	closer = 0;
	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (letters <= 0 || fd == -1)
	{
		return (0);
	}
	r = read(fd, buf, letters);
	if (r == -1)
	{
		return (0);
	}
	written = write(STDOUT_FILENO, buf, r);
	if (written == -1)
	{
		return (0);
	}
	close(fd);
	if (closer == -1)
	{
		return (0);
	}
	return (written);
}
