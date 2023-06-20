#include "main.h"
/**
 * main - function that checks for lowercase character.
 * Return: Always return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return 1;
	}
	else
	{
	return 0;
	}
}
