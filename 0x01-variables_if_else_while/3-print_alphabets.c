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

	lowCase = 97;
	upCase = 65;

	while (lowCase <= 122)
	{
		putchar(lowCase);
		lowCase++;
	}
	while (upCase <= 90)
	{
		putchar(upCase);
		upCase++;
	}
	putchar('\n');
	return (0);
}
