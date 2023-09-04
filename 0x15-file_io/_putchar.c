#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints character to standard input.
 * @c: parameter which is the character it accepts
 *
 * Return: return 1 on success and -1 on failure.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
