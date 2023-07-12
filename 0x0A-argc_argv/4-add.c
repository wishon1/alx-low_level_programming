#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: arguement count
 * @argv: arguement
 *
 * Return: return 0 if its successful
 */
int main(int argc, char *argv[])
{
	int countX, j, sum = 0;
	char c;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (countX = 1; countX < argc; countX++)
		{
			for (j = 0; argv[countX][j] != '\0'; j++)
			{
				c = argv[countX][j];
				if (isdigit(c))
				{

				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[countX]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
