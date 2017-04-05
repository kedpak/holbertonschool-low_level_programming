#include "holberton.h"

/**
 * read_textfile - reads textfile and prints content
 * @filename: name of file to retrieve content
 * @letters: number of characters to be printed
 * Return: number of written characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, written, r;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);
	if (filename == NULL || letters <= 0 || fd == -1)
	{
		free(buf);
		return (0);
	}

	r = read(fd, buf, letters);
	written = write(STDOUT_FILENO, buf, r);
	close(fd);

	free(buf);
	return (written);
}
