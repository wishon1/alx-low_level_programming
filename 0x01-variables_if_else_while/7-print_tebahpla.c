#include <stdio.h>
/**
 * main - start program
 *
 * Return: terminaate the program"
 */
int main(void)
{
	int reverse_case;

	for (reverse_case = 122; reverse_case >= 97; reverse_case--)
	{
		putchar(reverse_case);
	}
	putchar('\n');
	return (0);
}
