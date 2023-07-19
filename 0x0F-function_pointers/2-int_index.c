#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer.
 * @array: number of elements
 * @size: size of array.
 * @cmp: function pointer to array
 *
 * Return: return -1;
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	 int index = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (index < size)
	{
		if (cmp(array[index]))
			return (index);
		index++;
	}
	return (-1);
}
