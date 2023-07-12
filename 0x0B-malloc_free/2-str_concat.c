#include "main.h"
#include <stdlib.h>
/**
 * str_concat - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *pointer;
	int sOneCounter, sTwoCounter, indexOne, indexTwo;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	sOneCounter = 0;
	while (s1[sOneCounter] != '\0')
	{
		sOneCounter++;
	}
	sTwoCounter = 0;
	while (s2[sTwoCounter] != '\0')
	{
		sTwoCounter++;
	}

	pointer = malloc((sOneCounter + sTwoCounter + 1) * sizeof(char));
	if (pointer == NULL)
		return (NULL);
	indexOne = 0;
	while (s1[indexOne] != '\0')
	{
		pointer[indexOne] = s1[indexOne];
		indexOne++;
	}
	indexTwo = 0;
	while (s2[indexTwo] != '\0')
	{
		pointer[indexOne + indexTwo] = s2[indexTwo];
		indexTwo++;
	}
	pointer[sOneCounter + sTwoCounter] = '\0';
	return (pointer);
}
