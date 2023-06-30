#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: returns void
 */
void reverse_array(int *a, int n)
{
	int counter;
	int x;

	for (counter = 0; counter < n--; counter++)
	{
		x = a[counter];
		a[counter] = a[n];
		a[n] = x;
	}
}

