#include "main.h"
/**
 * _strlen_recursion - prints the length of a string
 * @s: pointer pointing to the first character of string
 *
 * Return: Return the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
