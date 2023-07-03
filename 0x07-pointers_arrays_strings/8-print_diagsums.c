#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int index = 0;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	while ( index < size)
	{
		sum += a[(size * index) + index];
		sum1 += a[(size * (index + 1)) - (index + 1)];

		index++;
	}

	printf("%d, %d\n", sum, sum1);
}
