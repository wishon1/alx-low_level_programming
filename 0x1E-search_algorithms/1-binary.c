#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: The list of values
 * @size: the length of the array(list)
 * @value: The value to search for
 *
 * Return: Return the index of the value else return -1 if value is absent
 * or if the array is Null
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid_index, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid_index = (left + right) / 2;
		if (array[mid_index] < value)
			left = mid_index + 1;
		else if (array[mid_index] > value)
			right = mid_index - 1;
		else
			return (mid_index);
	}

	return (-1);
}

