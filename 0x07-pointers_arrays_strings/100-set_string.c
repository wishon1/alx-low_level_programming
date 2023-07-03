#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer pointing to the address of another pointer
 * @to: pointer
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	 *s = to;
}
