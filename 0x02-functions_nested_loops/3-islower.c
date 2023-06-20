#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: character argument
 * Return: 1 if it's lowercase and 0 if uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
