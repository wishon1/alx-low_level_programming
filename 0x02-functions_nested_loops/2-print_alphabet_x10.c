#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	char letter;
	int linNum = 0;

	while (linNum < 10)
	{
	letter = 'a';
	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
	linNum++;
	}
}
