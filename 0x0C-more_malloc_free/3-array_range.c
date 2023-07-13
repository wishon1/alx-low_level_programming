#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: NULL if fail else return pointer
 */

int *array_range(int min, int max)
{
	int *pointer;
	int counter;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	pointer = malloc(sizeof(int) * size);
	if (pointer == NULL)
		return (NULL);

	for (counter = 0; min <= max ; counter++)
	{
		pointer[counter] = min++;
	}
	return (pointer);
}
