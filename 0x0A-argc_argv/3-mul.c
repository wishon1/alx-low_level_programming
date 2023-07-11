#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: arguement count
 * @argv: arguement string
 *
 * Return: 0 (successful)
 */
int main(int argc, char *argv[])
{
	int result;
	char error[] = "error";
	int index_one = 1;
	int index_two = 2;

	if (index_one < argc && index_two < argc)
	{
		result = atoi(argv[index_one]) * atoi(argv[index_two]);
		printf("%d\n", result);
	}
	else
	{
		printf("%s\n", error);
		return (1);
	}
	return (0);
}
