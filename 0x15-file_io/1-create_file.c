#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: if the function fails -1
 * or 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n_written, lenght = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		while (text_content[lenght])
			lenght++;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n_written = write(fd, text_content, lenght);

	if (fd == -1 || n_written == -1)
		return (-1);

	close(fd);
	return (1);
}

