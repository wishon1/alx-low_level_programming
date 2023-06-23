#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 - 9, followed by a new line
 * num: Digit to be returned to the function as int.
 * Return: void
 */
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
