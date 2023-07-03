#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: pointer pointing to first string
 * @accept: pointer pointer to seconcong string
 *
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int s_index = 0;
	int a_index;

	while (s[s_index] != '\0')
	{
		a_index = 0;
		while (accept[a_index] != '\0')
		{
			if (s[s_index] == accept[a_index])
			{
				return (&s[s_index]);
			}
			a_index++;
		}
		s_index++;
	}
	return (0);
}
