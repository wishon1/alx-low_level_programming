#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	long int num;
	long int max_num;
	long int a;

	num = 612852475143;
	max_num = -1;

	while (num % 2 == 0)
	{
		max_num = 2;
		num /= 2;
	}

	for (a = 3; a <= sqrt(num); a = a + 2)
	{
		while (num % a == 0)
		{
			max_num = a;
			num = num / a;
		}
	}

	if (num > 2)
		max_num = num;

	printf("%ld\n", max_num);

	return (0);
}
