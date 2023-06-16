#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start the programe
 *
 *Return: terminate the programe with success
 */
int main(void)
{
	int n;
	int lst_dgt;/* last digit is declared by me to solve the problem */

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code start here: lst_dgt is initialize */
	lst_dgt = n % 10;
	if (lst_dgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_dgt);
	} else if (lst_dgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lst_dgt);
	} else if (lst_dgt < 6 && lst_dgt != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_dgt);
	}
	return (0);
}
