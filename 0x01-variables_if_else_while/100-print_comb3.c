#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - start of the program
 * program to print 1-9 but with a two digit combination
 * Return: Terminate the programe with success
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i < '9'; i++)
	{
	for (j = i + 1; i <= '9'; j++)
	{
	if (j != i)
	{
	putchar(i);
	putchar(j);
	if (i == '8' && j == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
