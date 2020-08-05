#include "holberton.h"

/**
 * append_text_to_file - adds text to text file
 * @filename: textfile
 * @text_content: body of text
 *
 *
 * Return: 0
 */

int append_text_to_file(const char *filenae, char *text_content)

{
	int fd, i = 0;
	ssize_t wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR, 0664);
	if ((text_content == NULL) && (fd != -1))
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
		return (-1);
	return (1);
}
