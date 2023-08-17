#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: the first arguement
 *
 * Return: if n is 0 return 0 else return result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list number;

	va_start(number, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(number, int);
	}
	va_end(number);

	return (sum);
}
