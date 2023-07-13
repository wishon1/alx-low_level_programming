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

	if (min > max)
		return (0);

	pointer = malloc(((max - min) + 1) * sizeof(int));
	if (pointer == NULL)
		return (NULL);

	for (counter = 0; counter < max - min + 1; counter++)
	{
		pointer[counter] = min++;
	}
	return (pointer);
}
