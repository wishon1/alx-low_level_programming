#include <unistd.h>
/**
 * _putchar - function i created similar to putchar
 * @c: character of type char
 * return: return the character given to putchar on console
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
