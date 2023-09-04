#include "main.h"

/**
 * append_text_to_file - Appends the specified text to the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The text to be appended to the file.
 *
 * This function opens the file specified by @filename and appends the
 * content of @text_content to the end of the file. If the file does not
 * exist, it will be created. If @text_content is NULL or the file cannot
 * be opened or written to, the function returns -1. On success, it returns 1.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, character_count;
	ssize_t write_result;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		character_count = 0;
		while (text_content[character_count])
			character_count++;

		write_result = write(fd, text_content, character_count);
		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}

