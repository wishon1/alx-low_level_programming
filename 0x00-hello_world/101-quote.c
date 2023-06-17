#include <unistd.h>
/**
 * main - start of the program
 * using write(1, our_name, strlen(our_name))
 * Return: terminate the program
 */
int main(void)
{
	write(2, "and that piece of art is useful\", - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
