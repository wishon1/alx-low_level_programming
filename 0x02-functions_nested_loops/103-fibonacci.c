#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms.
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (a = 1; a <= 33 a++)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum += j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%lu\n", sum);
	return (0);
}
