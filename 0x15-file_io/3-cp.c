#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 1024

/**
 * error_exit - exit the programme if there is an error
 * @message: message to print
 * @filename: pointer to the name of the file
 * @fd: integer
 */
void error_exit(char *message, const char *filename, int fd)
{
	dprintf(STDERR_FILENO, message, filename);
	if (fd != -1)
	{
		close(fd);
	}
	exit(EXIT_FAILURE);
}

/**
 * main - copies the contenets of a file to another file
 * @argc: number of arguments
 * @argv: an array of pointers to the arguments
 * Return: 0 on susccess
 */
int main(int argc, char **argv)
{
	const char *file_form;
	const char *file_to;
	int fd_form;
	int fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t read_bytes;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_form file_to\n", argv[0]);
		exit(97);
	}
	file_form = argv[1];
	file_to = argv[2];
	fd_form = open(file_form, O_RDONLY);
	if (fd_form == -1)
	{
		error_exit("Error: Can't read from %s\n", file_form, -1);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		error_exit("Error: Can't write to %s\n", file_to, fd_form);
	}

	while ((read_bytes = read(fd_form, buffer, BUFFER_SIZE)) > 0)
	{
		ssize_t written_bytes = write(fd_to, buffer, read_bytes);

		if (written_bytes == -1 || written_bytes != read_bytes)
			error_exit("Error: Can't write to %s\n", file_to, fd_form);
	}
	if (read_bytes == -1)
		error_exit("Error: can't read from file %s\n", file_form, fd_to);
	close(fd_form);
	close(fd_to);

	return (0);
}

