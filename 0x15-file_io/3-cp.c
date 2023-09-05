#include "main.h"
char *file_from(char *fn, char *buffer);
/**
 * file_from - Reads the content of a file into a buffer
 * @filename: Pointer to the name of the file to read
 * @buffer: Pointer to a temporary buffer to store the file content
 *
 * Return: Pointer to the buffer containing the file content
 */

char *file_from(char *fn, char *buffer)
{
	int fd, closeResult;
	ssize_t bytesRead, totalBytes = 0;

	fd = open(fn, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fn);
		exit(98);
	}
	while ((bytesRead = read(fd, buffer + totalBytes, 1024)) > 0)
	{
		totalBytes += bytesRead;
	}
	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fn);
		exit(98);
	}
	closeResult = close(fd);
	if (closeResult == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (buffer);
}

/**
 * main - Copies the content from one file to another
 * @argc: Number of command-line arguments
 * @argv: Pointer to an array of command-line arguments
 *
 * Return: 1 if the copy is successful, -1 otherwise
 */
int main(int argc, char **argv)
{
	int f_d, closeResult, count;
	ssize_t writeResult;
	char *fileContent;
	char buffer[4096];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_d = file_from(argv[1], buffer);
	f_d = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	count = 0;
	while (fileContent[count])
		count++;

	writeResult = write(f_d, fileContent, count);
	if (writeResult == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	closeResult = close(f_d);
	if (closeResult == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_d);
		exit(100);
	}
	return (1);
}
