#include <unistd.h>

/**
 * _putchar - writes the c to standard output.
 *
 * Return: return 1 on success and return -1 if it fails.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
