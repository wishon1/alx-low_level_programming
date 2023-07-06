#include "main.h"

int check_pallindrom(char *s, int count_num, int length);
int _strlength_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pallindrom(s, 0, _strlength_recursion(s)));
}

/**
 * _strlength_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlength_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlength_recursion(s + 1));
}

/**
 * check_pallindrom - checks the characters recursively for palindrome
 * @s: string to check
 * @count_num: iterator
 * @length: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pallindrom(char *s, int count_num, int length)
{
	if (*(s + count_num) != *(s + length - 1))
		return (0);
	if (count_num >= length)
		return (1);
	return (check_pallindrom(s, count_num + 1, length - 1));
}

