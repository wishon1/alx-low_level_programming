#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: it's the number of underscore used in printing the line
 * Return: void
 */
void print_line(int n)
{
	int x = 1;

	while (x <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
