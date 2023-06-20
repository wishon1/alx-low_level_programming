#include "main.h"
/**
 * _isalpha - unction that checks for alphabetic character.
 *
 * @c: Argument of type int
 *
 * Return: Returns True if all characters in the string are alphabets.
 * If not, it returns False.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
