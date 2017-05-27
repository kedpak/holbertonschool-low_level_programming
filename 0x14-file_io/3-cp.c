#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * write_error - prints out error for write
 * @file: input file
 * Return: void
 */
void write_error(const char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * read_error - prints out read error
 * @file: input file
 * Return: void
 */
void read_error(const char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * main - copy contents of file to another
 * @argc: number of inputs
 * @argv: file names
 * Return: integer
 */
int main(int argc, char *argv[])
{
	char buf[1024];
	int f_from, f_to, file1, file2, close_to, close_from;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		read_error(argv[1]);
	}
	file2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file2 == -1)
		write_error(argv[2]);

	f_from = read(file1, buf, sizeof(buf));
	if (f_from == -1)
		read_error(argv[1]);
	while (f_from > 0)
	{
		f_to = write(file2, buf, f_from);
		if (f_to == -1)
		{
			write_error(argv[2]);
		}
		f_from = read(file1, buf, sizeof(buf));
		if (f_from == -1)
		{
			read_error(argv[1]);
		}
	}
	close_from = close(file1);
	if (close_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from), exit(100);
	close_to = close(file2);
	if (close_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to), exit(100);
	return (0);
}



