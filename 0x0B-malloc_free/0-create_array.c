#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and initializes with a character
 * @size: size of array which must be positive digits only
 * @c: String filling each array index
 *
 * Return: 0 with success
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int index = 0;

	pointer = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		while (index < size)
		{
			pointer[index] = c;
			index++;
		}
	}
	return (pointer);
}
