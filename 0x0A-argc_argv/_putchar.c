#include <unistd.h>
/**
 * _putchar - user created function similar to putchar
 * @c: accept a character as input
 *
 * return: return int
 */

 int _putchar(char c)
{
	return (write(1, &c, 1));
}
