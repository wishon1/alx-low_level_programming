#include "main.h"
/**
 * _pow_recursion - find the squre root of x raise to power
 * of y
 * @x: integer value to find its square root
 * @y: power of x
 *
 * return: return square root of x raise to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
