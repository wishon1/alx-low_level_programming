#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms.
 *
 * Return: Always 0
 */
int main(void)
{
	long int num_1, num_2, fn, afn;

	num_1 = 1;
	num_2 = 2;
	fn = afn = 0;
	while (fn <= 4000000)
	{
		fn = num_1 + num_2;
		num_1 = num_2;
		num_2 = fn;
		if ((num_1 % 2) == 0)
		{
			afn += num_1;
		}
	}
	printf("%ld\n", afn);
	return (0);
}
