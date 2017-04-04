#include "holberton.h"

/**
 * create_file - create a file
 * @filename: name of file to create
 * @text_content: write to the file
 * Return: 1 on success / -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, check, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[i] != '\0')
		{
		check = write(fd, text_content, i);
		if (check == -1)
			return (-1);
		i++;
		}
	}

	close(fd);
	return (1);
}
