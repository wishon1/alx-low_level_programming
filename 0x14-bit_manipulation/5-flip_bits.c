#include "main.h"
/**
 * flip_bits - returns the number of bits
 * you would need to flip to get from one number to another.
 *
 * @n: first number to flip.
 * @m: second number to flip.
 * Return: return number of bits that has been flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differing_bits = n ^ m;
	unsigned long int count = 0;
	unsigned long int mask = 1;

	while (differing_bits > 0)
	{
		if (differing_bits & mask)
		{
			count++;
		}
		differing_bits >>= 1;
	}
	return (count);
}

