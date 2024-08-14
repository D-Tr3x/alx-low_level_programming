#include "main.h"

/**
 * _perror - prints error message and exits with specified code
 * @message: the error message
 * @file: the file name
 * @code: the exit code
 */
void _perror(const char *message, const char *file, int code)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, file);
	exit(code);
}

/**
 * close_file - closes a file descriptor on error
 * @fd: file descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - copies the content of a file to another
 * @argc: number of arguments used
 * @argv: double pointer to argument list
 *
 * Return: 0 on success, or assigned error code on failure
 */
int main(int argc, char **argv)
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		_perror("Error: Can't read fro file", argv[1], 98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		_perror("Error: Can't write to", argv[2], 99);

	while ((bytes_read = read(file_from, buffer, 1024)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
			_perror("Error: Can't write to", argv[2], 99);
	}

	if (bytes_read == -1)
	{
		close(file_from);
		close(file_to);
		_perror("Error: Can't read from file", argv[1], 98);
	}

	close_file(file_from);
	close_file(file_to);
	return (0);
}
