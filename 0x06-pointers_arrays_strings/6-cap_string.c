#include "main.h"

/**
 * cap_string - Capitalizes all the words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int counter = 0;

	while (str[counter])
	{
		while (!(str[counter] >= 'a' && str[counter] <= 'z'))
			counter++;

		if (str[counter - 1] == ' ' ||
		    str[counter - 1] == '\t' ||
		    str[counter - 1] == '\n' ||
		    str[counter - 1] == ',' ||
		    str[counter - 1] == ';' ||
		    str[counter - 1] == '.' ||
		    str[counter - 1] == '!' ||
		    str[counter - 1] == '?' ||
		    str[counter - 1] == '"' ||
		    str[counter - 1] == '(' ||
		    str[counter - 1] == ')' ||
		    str[counter - 1] == '{' ||
		    str[counter - 1] == '}' ||
		    counter == 0)
			str[counter] -= 32;

		counter++;
	}

	return (str);
}
