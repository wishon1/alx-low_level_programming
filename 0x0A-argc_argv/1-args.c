#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
int main(int argc, char* argv[])
{
	(void)argv;

	int index, sum;
	
	index = 1;
	if (index <= argc)
	{
		sum = argc - index;
		printf("%d\n", sum);
	}
	return (0);
}
