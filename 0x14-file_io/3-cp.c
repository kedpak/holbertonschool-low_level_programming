#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main - copy contents of file to another
 * @argc: number of inputs
 * @argv: file names
 * Return: integer
 */
int main(int argc, char *argv[])
{
	char buf[1024];
	int f_from, f_to, file1, file2;

	file1 = open(argv[1], O_RDONLY);
	file2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	f_from = read(file1, buf, 1024);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE");
		exit(98);
	}
	while (f_from > 0)
	{
		f_to = write(file2, buf, f_from);
		if (f_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE");
			exit(99);
		}
		if (f_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE");
			exit(99);
		}
		f_from = read(f_from, buf, 1024);
	}
	if (close(f_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE");
		exit(100);
	}
	if (close(f_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE");
		exit(100);
	}
	return (1);
}
