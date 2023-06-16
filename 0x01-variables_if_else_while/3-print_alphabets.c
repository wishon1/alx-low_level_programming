#include <stdio.h>

/**
 * main - startof the programe
 *
 * Return: return 0 upon successful termination
 */
int main(void)
{
	int lowCase;
	int upCase;

	for (lowCase = 97; lowCase <= 122; lowCase++)
	{
		putchar(lowCase);
	}
	for (upCase = 65; upCase <= 90; upCase++)
	{
		putchar(upCase);
	}
	putchar('\n');
	return (0);
}
