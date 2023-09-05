#include "main.h"

/**
 * file_from - Reads the content of a file into a buffer
 * @filename: Pointer to the name of the file to read
 * @buffer: Pointer to a temporary buffer to store the file content
 *
 * Return: Pointer to the buffer containing the file content
 */

char *file_from(char *filename, char *buffer)
{
	int fileDescriptor, closeResult;
	ssize_t bytesRead, totalBytes = 0;

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	while ((bytesRead = read(fileDescriptor, buffer + totalBytes, 1024)) > 0)
	{
		totalBytes += bytesRead;
	}
	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	closeResult = close(fileDescriptor);
	if (closeResult == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileDescriptor);
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
	int fileToDescriptor, closeResult, count;
	ssize_t writeResult;
	char *fileContent;
	char buffer[4096];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileContent = file_from(argv[1], buffer);
	fileToDescriptor = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileToDescriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	count = 0;
	while (fileContent[count])
		count++;

	writeResult = write(fileToDescriptor, fileContent, count);
	if (writeResult == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	closeResult = close(fileToDescriptor);
	if (closeResult == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileToDescriptor);
		exit(100);
	}
	return (1);
}

