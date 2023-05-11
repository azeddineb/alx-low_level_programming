#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read test file print to stdout
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: actual number of bytes read and printed
 * 0 when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, nwritten, nread;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = (char *)malloc(letters * sizeof(char));
	nread = read(fd, buf, letters);
	if (nread == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	nwritten = write(STDOUT_FILENO, buffer, nread);
	if (nwritten == -1 || nwritten != nread)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (0);
}

