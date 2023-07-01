#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 *
 * @b: buffer.
 * @size: size of buffer.
 * Return: void.
 */
void print_buffer(char *b, int size)
{
	int c1, c2, c3;

	if (size <= 0)
		printf("\n");
	else
	{
		for (c1 = 0; c1 < size; c1 += 10)
		{
			printf("%.8x:", c1);
			for (c2 = c1; c2 < c1 + 10; c2++)
			{
				if (c2 % 2 == 0)
					printf(" ");
				if (c2 < size)
					printf("%.2x", *(b + c2));
				else
					printf("  ");
			}
			printf(" ");
			for (c3 = c1; c3 < c1 + 10; c3++)
			{
				if (c3 >= size)
					break;
				if (*(b + c3) < 32 || *(b + c3) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + c3));
			}
			printf("\n");
		}
	}
}
