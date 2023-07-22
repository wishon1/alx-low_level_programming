#include <unistd.h>
/**
 * _putchar - writes the character c to console
 * @c: represents the character that the function accept
 * the character is of type char
 *
 * Return: return 1 on success else return -1
 */
int _putchar(char c);
{
	return (write(1, &c, 1));
}
