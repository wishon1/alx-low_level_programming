#include <unistd.h>
/**
 * _putchar - writes the character c to standard output.
 * @c: the character to print.
 *
 * Return: return 1 on success else return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
