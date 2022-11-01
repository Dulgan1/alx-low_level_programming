#include "main.h"

/**
 * _strlen - coints the length of a string
 * @s: string to be count
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * create_file - creates a new file
 * @filename: name for the file
 * @text_content: as name implies
 * Return: 1 on succes, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int nwrite;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	nwrite = write(fd, text_content, _strlen(text_content));
	if (nwrite < 0 || nwrite != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
