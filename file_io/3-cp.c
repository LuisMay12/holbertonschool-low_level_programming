#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void error_exit(int code, const char *message, const char *arg);
void copy_file(const char *file_from, const char *file_to);

/**
 * main - Entry point to copy one file into another
 * @argc: Number of arguments
 * @argv: Argument vector
 *
 * Return: 0 on success, exits with error codes on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		error_exit(97, "Usage: %s file_from file_to\n", argv[0]);

	copy_file(argv[1], argv[2]);
	return (0);
}

/**
 * error_exit - Print error and exit with code
 * @code: Exit status
 * @message: Error message format
 * @arg: Argument to format
 */
void error_exit(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

/**
 * copy_file - Copies content from one file to another
 * @file_from: Source file
 * @file_to: Destination file
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, r, w;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to %s\n", file_to);
	}

	while ((r = read(fd_from, buffer, 1024)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to %s\n", file_to);
		}
	}

	if (r == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
}
