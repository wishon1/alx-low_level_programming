#include <unistd.h>
/**
 * _putchar: write the character c to the standard output
 * @c: input character.
 *
 * Return: return success 1, on error return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
