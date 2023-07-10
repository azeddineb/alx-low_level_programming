#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: pointer to the file name
 * @text_content: text to add to the end of the file
 *
 * Return: if it fails or filename is NULL -1
 * if the file does not exist or lack of permisttions -1
 * Otherwise 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_written, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		while (text_content[lenght])
			lenght++;

	fd = open(filename, O_RDONLY | O_APPEND);
	n_written = write(fd, text_content, lenght);

	if (fd == -1 || n_written == -1)
		return (-1);

	close(fd);

	return (1);
}

