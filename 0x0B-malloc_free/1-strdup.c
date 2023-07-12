#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string
 * @str: string to be copied
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	int strLen;
	int counter;
	char *pointer;

	if (str == NULL)
	{
		return (0);
	}

	for (strLen = 0; str[strLen] != '\0'; strLen++)

	pointer = malloc((strLen + 1) * sizeof(char));

	if (pointer == NULL)
	{
		return (0);
	}
	else
	{
		for (counter = 0; counter < strLen; counter++)
		{
			pointer[counter] = str[counter];
		}
		pointer[counter] = '\0';
	}
	return (pointer);
}
