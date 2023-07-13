#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of element in the array
 * @size: number of elemnet in each element
 *
 * Return: return pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int counter;

	if (nmemb == 0 || size == 0)
		return (0);

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (0);

	for (counter = 0; counter < nmemb * size; counter++)
	{
		*(pointer + counter) = 0;
	}
	return (pointer);
}
