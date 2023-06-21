#include "main.h"
/**
 * times_table - unction that prints the 9 times table, starting with 0
 * Return: returns 0
 */

void times_table(void)
{
	int alpha, beta, gamma;

	for (beta = 0; beta < 10; beta++)
	{
		for (alpha = 0; alpha < 10; alpha++)
		{
			gamma = alpha * beta;
			if (alpha == 0)
			{
				_putchar(gamma + '0');
			}
			else if (gamma >= 10)
			{
				_putchar(' ');
				_putchar(gamma / 10 + '0');
				_putchar(gamma % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(gamma + '0');
			}
			if (alpha != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
