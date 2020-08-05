#include "holberton.h"

/**
 * create_file - creates a new file with read and write permissions
 * @filename: filename to be created
 * @text_content: body of file filename
 *
 *
 * Return: 1 on success, -1 on fail
 */

int create_file(const char *filename, char *text_content)

{
	int fd;
	int i = 0;
	ssize_t wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
        if (fd == -1)
		return (-1);
	while (text_content[i])
		i++;
	wr = write(fd, text_content, i);
	if (wr == -1)
	{
		write(1, "fails", 5);
		return (-1);
	}
	return (1);
}
