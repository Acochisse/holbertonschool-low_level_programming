#include "holberton.h"

/**
 * read_textfile - read a text file and print to stdout
 * @filename: Name of the file to be read
 * @letters: struct
 * Return: Number of letters read and printed,  0 on fail
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	int fd;
	ssize_t size, wr;


	char *c;


	fd = open(filename, O_RDONLY, 0400);

	if (fd == -1 || filename == NULL)
		return (0);
	c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);
	wr = read(fd, c, letters);
	size = write(STDOUT_FILENO, c, wr);

	close(fd);
	free(c);
	return (size);
}
