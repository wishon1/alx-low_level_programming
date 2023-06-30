#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13.
 * @s: pointer to string
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int counter_one;
	int counter_two;
	char normalAlpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotAlpha[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (counter_one = 0; s[counter_one] != '\0'; counter_one++)
	{
		for (counter_two = counter_two; counter_two < 52; counter_two++)
		{
			if (s[counter_one] == normalAlpha[counter_two])
			{
				s[counter_one] = rotAlpha[counter_two];
				break;
			}
		}
	}
	return (s);
}

