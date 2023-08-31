#include "main.h"

/**
 * clear_bit - Clears a bit in a number at a specified index
 * @n: Pointer to an unsigned long integer
 * @index: Index of the bit to be cleared
 *
 * This function clears the bit at the given index in the provided number.
 * Return: 1 if the operation was successful, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitmask;

	if (index > sizeof(n) * 8)
		return (-1);

	bitmask = ~(1 << index);
	*n = *n & bitmask;

	return (1);
}

