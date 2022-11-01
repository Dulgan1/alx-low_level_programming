#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads the content of a file and prints it to POSIX stdout
 * @filename: name or path of file
 * @letters: number of letters it should print
 * Return: number of buffer rread
 */

ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file - creates a new file
 * @filename: name for the file 
 * @text_content: as name implies
 * Return: 1 on succes, -1 on failure
 */

int create_file(const char *filename, char *text_content);

/**
 * _strlen - coints the length of a string
 * @s: string to be count
 * Return: length
 */

int _strlen(char *s);

/**
 * append_text_to_file - appends text to the end of file
 * @filename: name or path of file to append to
 * @text_content: text content to append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content);
#endif
