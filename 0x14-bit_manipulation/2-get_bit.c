#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal number to extract the bit from.
 * @index: index starting from 0 of the bit to retrieve.
 *
 * Return: value of the bit at index or -1 if index is out of range.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, bit_value;

	mask = 1;
	if (n == 0)
		return (0);

	if (index > 64)
		return (-1);

	mask = mask << index;

	if (n & mask)
		bit_value = 1;
	else
		bit_value = 0;

	return (bit_value);
}

