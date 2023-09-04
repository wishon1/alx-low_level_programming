#include "main.h"

/**
 * create_file - Creates a new file or truncates an existing file
 * @filename: Pointer to the name of the file to create or truncate
 * @text_content: The content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	int content_length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	content_length = 0;
	while (text_content[content_length])
		content_length++;

	bytes_written = write(fd, text_content, content_length);

	if (bytes_written == -1)
		return (-1);

	close(fd);

	return (1);
}
