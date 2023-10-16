#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * _puts: write a character or value to the stdout.
 * @s: character to be written.
 */
void _puts(char *s)
{
	write(1, s, strlen(s));
}
