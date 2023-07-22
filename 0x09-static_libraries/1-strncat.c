#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: pointer pointint to the first string
 * @src: pointer to the second sting
 * @n: number of bytes
 * Return: return the string contained in dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0; /* a  = counter for dest starting from 0 */
	int b; /* 0 = counter for src starting from 0 */

	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (b < n  && src[b] != '\0')
	{	dest[a] = src[b];
		a++;
		b++;

	}
	dest[a] = '\0';
	return (dest);

}
