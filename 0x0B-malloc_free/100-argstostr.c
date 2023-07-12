#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: int input
 * @av: double pointer to array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int acCounter, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (acCounter = 0; acCounter < ac; acCounter++)
	{
		for (n = 0; av[acCounter][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (acCounter = 0; acCounter < ac; acCounter++)
	{
	for (n = 0; av[acCounter][n]; n++)
	{
		str[r] = av[acCounter][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
