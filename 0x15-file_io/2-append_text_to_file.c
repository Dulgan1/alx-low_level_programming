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
 * append_text_to_file - appends text to the end of file
 * @filename: name or path of file to append to
 * @text_content: text content to append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nwrite;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
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
