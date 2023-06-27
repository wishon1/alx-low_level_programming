#include <stdio.h>

/**
 * swap_int - function that swaps the value of two integer
 * @a: value of int to be swap
 * @b: value of typ; int to be swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
