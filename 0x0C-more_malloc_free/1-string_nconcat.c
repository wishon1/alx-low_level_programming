#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - unction that concatenates two strings.
 * @s1:first sting
 * @s2: second string
 * @n: number of bytes of second string
 *
 * Return: return pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int x, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}

	pointer = malloc((i * sizeof(char)) + n + 1);
	if (pointer == NULL)
		return (0);

	for (x = 0; x < i + n; x++)
	{
		if (!(x >= i))
			pointer[x] = s1[x];
		else
			pointer[x] = s2[x - i];
	}
	pointer[x] = '\0';
	return (pointer);
}
