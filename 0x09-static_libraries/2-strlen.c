#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of a sring
 *@s: pointer
 * Return: Always 0
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}

	return (a);
}
