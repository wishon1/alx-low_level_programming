#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array.
 * @array: array of int.
 * @size: size of array.
 * @action: function pointer to int.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index = 0;

	if (array == NULL || action == NULL)
		return;

	while (index < size)
	{
		action(array[index]);
		index++;
	}
}
