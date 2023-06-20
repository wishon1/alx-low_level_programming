#include "main.h"
/**
 * main - defines the program function and scoop
 * void print_alphabet(void);user define var. to print letters
 * Return: Terminate the program with valuewith success(0)
 */
void print_alphabet(void)/*function that prints the alphabet.*/
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
		putchar('\n');
	}
}
