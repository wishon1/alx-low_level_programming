#include "main.h"

/**
 * error_file - check if a file is opened
 * @fd_from: file descriptor for copying from and checking
 * @fd_to: file descriptor for the destination file
 * @argv: argument vector
 * Return: void
 */
void handle_file_error(int file_from, int file_to, char *argv[]) 
{
	if (file_from == -1) 
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1) 
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copy content of a file into another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success.
 */
int main(int argc, char *argv[]) 
{
	int file_from, file_to, close_result;
	ssize_t num_bytes_read, num_bytes_written;
	char buffer[1024];

	if (argc != 3) 
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	error_file(file_from, file_to, argv);

	num_bytes_read = 1024;
	while (num_bytes_read == 1024) 
	{
		num_bytes_read = read(file_from, buffer, 1024);
		if (num_bytes_read == -1)
			error_file(-1, 0, argv);
		num_bytes_written = write(file_to, buffer, num_bytes_read);
		if (num_bytes_written == -1)
			error_file(0, -1, argv);
	}

	close_result = close(file_from);
	if (close_result == -1) 
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_result = close(file_to);
	if (close_result == -1) 
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
