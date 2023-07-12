#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied 
 *
 * Return: returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *pointer;
	int strLen, strCounter;

	if (str == NULL)
		return (NULL);
	
	strLen = 0;
	while (str[strLen] != '\0')
	{
		strLen++;
	}

	pointer = malloc((strLen + 1) * sizeof(char));

	strCounter = 0;
	while (str[strCounter] != '\0')
	{
		pointer[strCounter] = str[strCounter];
		strCounter++;
	}
	return (pointer);
}
