#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: pointer to file.
 * @letters: number of bytes of the characters in the file.
 *
 *
 * Return: return the charcaters read to std. ouput.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *ptr;
	ssize_t read_bytes, write_bytes;

	if (filename == NULL)
		return (0);

	ptr = malloc(sizeof(char) * letters)
		if (ptr == NULL)
			return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(ptr)
		return (0);
	}

	read_bytes = read(fd, ptr, letters);
	write_bytes = write(STD_FILENO, ptr, read_bytes);

	close(fd);

	free(ptr);
	return (write_bytes);
}
