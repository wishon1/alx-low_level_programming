#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number in decimal value to convert to binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, num = n, num_bits = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (num > 0)
	{
		num_bits++;
		num = num >> 1;
	}

	mask = mask << (num_bits - 1);

	while (num_bits > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask = mask >> 1;
		num_bits--;
	}
}
