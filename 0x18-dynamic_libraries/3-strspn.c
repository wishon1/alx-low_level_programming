#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer to the string to be checked
 * @accept: pointer to the string containing the characters to match.
 *
 * Return: matchinhlenght
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int matchingLength = 0;
	int acceptIndex;

	while (*s)
	{
		for (acceptIndex = 0; accept[acceptIndex]; acceptIndex++)
		{
			if (*s == accept[acceptIndex])
			{
				matchingLength++;
				break;
			}
			else if (accept[acceptIndex + 1] == '\0')
				return (matchingLength);
		}
		s++;
	}
	return (0);
}
