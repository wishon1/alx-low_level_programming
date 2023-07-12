#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: width of array.
 * @height: height of array
 *
 * Return: NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **pointer;
	int hCounter, wCounter;

	pointer = malloc(height * sizeof(*pointer));
	if (pointer == NULL || width <= 0 || height <= 0)
	return (NULL);

	for (hCounter = 0; hCounter < height; hCounter++)
	{
		pointer[hCounter] = malloc(width * sizeof(**pointer));
		if (pointer[hCounter] == NULL)
		{
			wCounter = 0;
			while (wCounter < hCounter)
			{
				free(pointer[wCounter]);
				wCounter++;
			}
			free(pointer);
			return (0);
		}
		wCounter = 0;
		while (wCounter < height)
		{
			pointer[hCounter][wCounter] = 0;
			wCounter++;
		}
	}
	return (pointer);
}
