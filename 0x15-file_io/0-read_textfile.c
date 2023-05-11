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
	ssize_t fd;
	ssize_t nread;
	ssize_t nwritten;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	nread = read(fd, buf, letters);
	nwritten = write(STDOUT_FILENO, buf, nread);

	free(buf);
	close(fd);
	return (nwritten);

}

