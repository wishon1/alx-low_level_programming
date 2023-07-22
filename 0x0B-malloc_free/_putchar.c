#include <unistd.h>
/**
 * _putchar - similar to stdio function; putchar 
 * @c: display the character c on the console
 *
 * Return: return 1 on success
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
