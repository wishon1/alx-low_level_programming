#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase.
 *This function prints all the lowercase letters of the English alphabet
 * from 'a' to 'z' using the _putchar function
 *
 * Reeturn: 0
 */
void print_alphabet(void)/*function that prints the alphabet.*/
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
