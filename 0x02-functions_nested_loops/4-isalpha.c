#include "main.h"
/**
 * main - declares th e main function and defines it
 * function that checks for alphabetic character
 * Return: Always return 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))	
}
