#include <stdio.h>
/**
 * main - start the program
 *
 * Return: Terminate the program
 */
int main(void)
{
	int num;
	int alpha;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (alpha = 97; alpha <= 102; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
