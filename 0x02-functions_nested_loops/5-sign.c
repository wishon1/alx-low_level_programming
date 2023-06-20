#include "main.h"
/**
 * main - Defines the fuction prototype, macros and its body
 * function that computes the absolute value of an integer.
 * Return: Return function data type 
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
    }
}
