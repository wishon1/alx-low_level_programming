#include "main.h"
/**
 * _strncpy - copies src[counter] to dest[counter]
 * @dest: first string
 * @src: string
 * @n: maximum number of character to be copied.i
 * Return: return dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int counter = 0; /*counts the string starting from 0 index */

	while (counter < n && src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}

	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
