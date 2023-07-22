#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int counter_1 = 0, c2 = 0, largeSize, bg, dr1, dr2, add = 0;

	while (*(n1 + counter_1) != '\0')
		counter_1++;
	while (*(n2 + c2) != '\0')
		c2++;
	if (counter_1 >= c2)
		bg = counter_1;
	else
		bg = c2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	counter_1--, c2--, size_r--;
	dr1 = *(n1 + counter_1) - 48, dr2 = *(n2 + c2) - 48;
	while (bg >= 0)
	{
		largeSize = dr1 + dr2 + add;
		if (largeSize >= 10)
			add = largeSize / 10;
		else
			add = 0;
		if (largeSize > 0)
		*(r + bg) = (largeSize % 10) + 48;
		else
			*(r + bg) = '0';
		if (counter_1 > 0)
			counter_1--, dr1 = *(n1 + counter_1) - 48;
		else
			dr1 = 0;
		if (c2 > 0)
			c2--, dr2 = *(n2 + c2) - 48;
		else
			dr2 = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
