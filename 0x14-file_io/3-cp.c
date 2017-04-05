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
	int src, dest, k, m;
	char buf[1024];

	src = open(argv[1], O_RDONLY | O_TRUNC);
	dest = open(argv[2], O_WRONLY, 664);

	k = read(src, buf, 1024);
	m = write(dest, buf, k);
	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	if (src == -1)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest == -1)
	{
		printf("Error: Can't write to %s\n", argv[1]);
		exit(100);
	}
	if (k != m)
	{
		printf("Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	return (0);
}
