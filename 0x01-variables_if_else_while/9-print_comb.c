#include <stdio.h>
/**
 * main - The genesis of the program
 *
 * Return: Terminate the program
 */
int main(void)
{
	int in_digit_num;

	for (in_digit_num = 48; in_digit_num <= 57; in_digit_num++)
	{
		putchar(in_digit_num);
		if (in_digit_num == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
