#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: the first arguement
 *
 * Return: if n is 0 return 0 else return result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nameOfList;
	unsigned int counter = 0;
	int result = 0;

	va_start(nameOfList, n);

	if (n == 0)
		return (0);

	while (counter < n)
	{
		result +=  va_arg(nameOfList, int);
		counter++;
	}
	va_end(nameOfList);
	return (result);
}
