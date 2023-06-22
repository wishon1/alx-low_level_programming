#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 * followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int c;
	long int num_1, num_2, fibo;

	num_1 = 1;
	num_2 = 2;
	printf("%ld, %ld", num_1, num_2);
	for (c = 0; c < 48; c++)
	{
		fibo = num_1 + num_2;
		printf(", %ld", fibo);
		num_1 = num_2;
		num_2 = fibo;
	}
	printf("\n");
	return (0);
}
