#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: arguement count
 * @argv:argurment of vector which is void
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
