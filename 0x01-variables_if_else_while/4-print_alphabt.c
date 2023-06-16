#include <stdio.h>
/**
 * main - Start of the programe
 *
 * Return: terminate the program with sucess(0)
 */
int main(void)
{
	int alpha = 97;

	while (alpha <= 122)
	{
		if (alpha == 101 || alpha == 113)
		{
			alpha++;
			continue;
		}
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
