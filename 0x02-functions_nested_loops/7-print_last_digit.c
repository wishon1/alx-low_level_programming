#include "main.h"
/**
 * print_last_digit - The function prints the last digit of a number.
 * @num: int type to be retuned
 * Return: Return 'num'
 */

int print_last_digit(int num)
{
	int digit = num % 10;/*use % 10 to find last digit */

	_putchar('0' + digit);
	return (num);
}
