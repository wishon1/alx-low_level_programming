#include <stdio.h>
/**
 * main - programes that prints it'self
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: name of program
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n",  argv[0]);
	return (0);
}
