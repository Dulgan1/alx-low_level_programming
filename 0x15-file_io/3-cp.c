#include "main.h"

/**
 * __exit - exits code on errors
 * @fd: file descriptor with error
 * @fn: name of file with error
 * Return: 0
 */

int __exit(int fd, char *fn, int errcode)
{
	switch (errcode)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(errcode);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fn);
		exit(errcode);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", fn);
		exit(errcode);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(errcode);
	default:
		return (0);
	}
}

/**
 * main - the main entry of code
 * @argc: command line argument count
 * @argv: array of arguments
 * Return: 0 on successful run
 *
 */

int main(int argc, char *argv[])
{
	int fd1, fd2, nwrite, nread;
	char *buffer[1024];

	if (argc < 3)
		__exit(0, NULL, 97);

	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (fd2 < 0)
	{
		close(fd2);
		__exit(0, argv[2], 99);
	}

	fd1 = open(argv[1], O_RDONLY);

	if (fd1 < 0)
	{
		close(fd2);
		close(fd1);
		__exit(0, argv[1], 98);
	}

	while ((nread = read(fd1, buffer, 1024)) != 0)
	{
		if (nread < 0)
			__exit(0, argv[1], 98);
		nwrite = write(fd2, buffer, nread);
		if (nwrite < 0)
			__exit(0, argv[2], 99);
	}

	close(fd2) < 0 ? (__exit(0, argv[2], 100)) : close(fd2);
	close(fd1) < 0 ? (__exit(0, argv[1], 100)) : close(fd1);

	return (0);
}
