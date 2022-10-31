#include "main.h"

/**
 * read_textfile - reads the content of a file and prints it to POSIX stdout
 * @filename: name or path of file
 * @letters: number of letters it should print
 * Return: number of read for buffer
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t nread, nwrite;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	nread = read(fd, buffer, letters);
	
	if (nread < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	nwrite = write(STDOUT_FILENO, buffer, nread);

	if (nwrite < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (nread);
}
