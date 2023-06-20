#include "main.h"
/**
 * main - Declares and defines the function--
 * -- void print_alphabet_x10(void)
 *  Return: Returns void
 */
void print_alphabet_x10(void)
{
	int letter;
	int linNum = 0;

	while (linNum < 10)
	{
	letter = 'a';
	while (letter < 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
	linNum++;
	}
}
