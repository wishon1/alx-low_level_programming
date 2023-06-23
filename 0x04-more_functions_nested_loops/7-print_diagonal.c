#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: Arguement of type; integer
 * Return: void
 */
void print_diagonal(int n)
{
	int x, a;

	x = 0;
	while (n > 0)
	{
		a = x;
		while (a > 0)
		{
			_putchar(' ');
			a--;
		}
		_putchar('\\');
		_putchar('\n');
		x++;
		n--;
	}
	if (x < 1)
		_putchar('\n');
}
