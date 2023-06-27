#include "main.h"
#include <string.h>

/**
 * _puts - prints a string to the console
 * @str: a pointer pointing to the string literal
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
