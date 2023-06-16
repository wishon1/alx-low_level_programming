#include <stdio.h>
/**
 * main - start the program
 *
 * Return: terminate the programe (0 = success)
 */
int main(void)
{
	int sin_digit;

	for (sin_digit = 0; sin_digit <= 9; sin_digit++)
	{
		putchar(sin_digit + 48);
	}
	putchar('\n');
	return (0);
}
