#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: pointer pointing to the memory area recieving
 * @src: pointer pointing to the string to be copied
 * @n: maximum number sting to be copied
 *
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
