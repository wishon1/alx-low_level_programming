#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: arguement count.
 * @argv: arguement vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int index = 0;

	while (index < argc)
	{
		printf("%s\n", argv[index]);
		index++;
	}
	return (0);
}
