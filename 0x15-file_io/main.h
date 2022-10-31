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
 */

ssize_t read_textfile(const char *filename, size_t letters);
#endif
