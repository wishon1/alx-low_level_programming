#include "main.h"
/**
 * nSquareRoot - returns the natural square root of a number.
 * returns the natural square root of a number.
 * @count_num: iterator.
 * @n: number
 *
 * Return: square root or -1.
 */

int nSquareRoot(int n, int count_num)
{
	if (count_num % (n / count_num) == 0)
	{
		if (count_num * (n / count_num) == n)
			return (count_num);
		else
			return (-1);
	}
	return (0 + nSquareRoot(n, count_num + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (nSquareRoot(n, 2));
}
