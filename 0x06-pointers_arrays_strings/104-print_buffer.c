#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer of buffer in int
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int c1, c2, c3;

	c1 = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (c1 < size)
	{
		c2 = size - c1 < 10 ? size - c1 : 10;
		printf("%08x: ", c1);
		for (c3 = 0; c3 < 10; c3++)
		{
			if (c3 < c2)
				printf("%02x", *(b + c1 + c3));
			else
				printf("  ");
			if (c3 % 2)
			{
				printf(" ");
			}
		}
	}
}
