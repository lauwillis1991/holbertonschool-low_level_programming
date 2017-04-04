#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and print it to POSIX stdout
 * @filename: char string of file
 * @letters: integer of letter
 * Return: 0 if fails/NULL or actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t i;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	i = read(fd, buffer, letters);
	if (i == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	write(STDOUT_FILENO, buffer, i);
	free(buffer);
	close(fd);
	return (i);
}
