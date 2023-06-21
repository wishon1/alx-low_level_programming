#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 * Return: void
 */

void jack_bauer(void)
{
	int a;

	for (a = 0; a < 24; a++)
	{
		int b;

		for (b = 0; b < 60; b++)
		{
			_putchar('0' + (a / 10));
			_putchar('0' + (a % 10));
			_putchar(':');
			_putchar('0' + (b / 10));
			_putchar('0' + (b % 10));
			_putchar('\n');
		}
	}
}
