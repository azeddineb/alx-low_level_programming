#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *filename);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes for a buffer.
 * @filename: name of the file buffer.
 *
 * Return: pointer to the allocated buffer.
 */
char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - closes a file
 * @fd: the file descriptor to close
 */
void close_file(int fd)
{
	int d;

	d = close(fd);
	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another file.
 * @argc: the number of arguments.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, n_read, n_written;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	n_read = read(fd_from, buffer, 1024);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	do {
		if (fd_from == -1 || n_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		n_written = write(fd_to, buffer, n_read);
		if (fd_to == -1 || n_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		n_read = read(fd_from, buffer, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (n_read > 0);
	free(buffer);
	close_file(fd_from);
	close(fd_to);
	return (0);
}

