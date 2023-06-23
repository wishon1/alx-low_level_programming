#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int n_line, num;

	for (n_line = 0; n_line < 10; n_line++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
			_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
