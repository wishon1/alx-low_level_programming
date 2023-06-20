#include "main.h"
#include <unistd.h>
/**
 * Main - start of the program
 * the _program.c file to be linked to the source file
 * Return: terminate the program
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
