#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Beginning of the program
 * Write a program that prints all possible different combinations
 * --of three digits.
 *  Return: Return 0 with success
 */
int main(void)
{
	int dipole, pole, qole;

	for (dipole = '0'; dipole < '9'; dipole++)
	{
	for (pole = dipole + 1; pole <= '9'; pole++)
	{
	for (qole = pole + 1; qole <= '9'; qole++)
	{
	if ((pole != dipole) != qole)
	{
	putchar(dipole);
	putchar(pole);
	putchar(qole);
	if (dipole == '7' && pole == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
