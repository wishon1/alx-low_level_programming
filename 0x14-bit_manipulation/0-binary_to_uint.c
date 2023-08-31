#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to string.
 *
 * Return: return the converted result as unusigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	int index, result, value;

	if (b == NULL)
		return (0);

	index = 0;
	result = 0;
	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}
		else
		{
			value = b[index] - '0';
			result = result * 2 + value;
		}
		index++;
	}
	return (result);
}
