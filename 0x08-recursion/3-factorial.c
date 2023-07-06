#include "main.h"
/**
 * factorial - calculate the factoril of a given number
 * @n: integer value to calculate its factorial
 *
 * Return: return the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
