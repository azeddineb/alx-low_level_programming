#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print it to stdout
 * @filename: text file to be read
 * @letters: numbers of letter to read
 * Return: acual number of letters read and printed
 * 0 if function fails
 */
size_t read_textfile(const char *filename, size_t letters)
{
	char buffer[letters+1];
	ssize_t fd, n_written, n_read;

	fd = open(filename, O_REDONLY);
	if (fd == -1)
		return (0);
	n_read = read(fd, buffer, letters);
	n_written = write(STDOUT_FILENO, buffer, n_read);

	close(fd);
	return (n_written);
}

