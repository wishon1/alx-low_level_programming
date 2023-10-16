#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: pointer to  first string
 * @src: pointer to  Second string
 *
 * Return: return dest.(string)
 */
char *_strcat(char *dest, char *src)
{
	int a = 0; /* a is the counter for dest start 4rm 0 */
	int b; /* counter for src start from 0 */

	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
