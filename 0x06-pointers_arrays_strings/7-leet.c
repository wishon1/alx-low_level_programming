#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @n: were n is the input value
 * Return: return n
 */
char *leet(char *n)
{
	int counter_one, counter_two;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (counter_one = 0; n[counter_one] != '\0'; counter_one++)
	{
		for (counter_two = 0; counter_two < 10; counter_two++)
		{
			if (n[counter_one] == s1[counter_two])
			{
				n[counter_one] = s2[counter_two];
			}
		}
	}
	return (n);
}
