#include "main.h"

int main_prime_num(int n, int count_num);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (main_prime_num(n, n - 1));
}

/**
 * main_prime_num - calculates if a number is prime recursively
 * @n: number to evaluate
 * @count_num: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int main_prime_num(int n, int count_num)
{
	if (count_num == 1)
		return (1);
	if (n % count_num == 0 && count_num > 0)
		return (0);
	return (main_prime_num(n, count_num - 1));
}

