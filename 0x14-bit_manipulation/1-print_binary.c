#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n:value to convert to binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int shift;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	shift = 1;
	while (shift <= n)
		shift <<= 1;

	shift >>= 1;

	while (shift > 0)
	{
		if (n & shift)
			_putchar('1');
		else
			_putchar('0');

		shift >>= 1;
	}
}

