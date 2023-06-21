#include "main.h"
/**
 * print_last_digit - The function prints the last digit of a number.
 * @num: int type to be retuned
 * Return: Return 'num'
 */

int print_last_digit(int num)
{
	num = num % 10;/* use % 10 to find last digit */
	if (num < 0)
	{
		num *= (-1);
	}
	_putchar(num + '0');
	return (num);
}
