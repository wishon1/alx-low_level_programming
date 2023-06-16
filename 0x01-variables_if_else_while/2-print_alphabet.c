#include <stdio.h>
/**
 * main - start the program
 * Return: Terminates the program with sucess(0)
 */
int main(void)
{
	int low_case;

	for (low_case = 'a'; low_case <= 'z'; low_case++)
	{
	putchar(low_case);
	}
	putchar('\n');
	return (0);
}

